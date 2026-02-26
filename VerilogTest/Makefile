# ====================================
# Configuration
# ====================================
VERILATOR = verilator
SRC_DIR   = source
OUT_DIR   = outputs
OBJ_DIR   = $(OUT_DIR)/obj_dir

# Automatically find all .sv files
SV_FILES = $(wildcard $(SRC_DIR)/*.sv)

# Automatically find all testbench names (strip .sv)
TESTBENS = $(basename $(notdir $(wildcard $(SRC_DIR)/*_tb.sv)))

# ====================================
# Default target
# ====================================
all:
	@echo "Available testbenches: $(TESTBENS)"
	@echo "Run with: make <testbench> or make <testbench>-debug"

# ====================================
# Generic build rule
# ====================================
build-%:
	mkdir -p $(OUT_DIR)
	$(VERILATOR) --cc --build \
		--binary \
		--sv \
		--timing \
		--trace \
		--Mdir $(OBJ_DIR) \
		--top-module $* \
		$(SV_FILES)

# ====================================
# Generic run rule
# ====================================
run-%:
	./$(OBJ_DIR)/V$*

# ====================================
# Generic debug rule (run + GTKWave)
# ====================================
%-debug: build-% run-%
	@if [ -f $(OUT_DIR)/wave.vcd ]; then \
		gtkwave $(OUT_DIR)/wave.vcd & \
	else \
		echo "No waveform file found"; \
	fi

# ====================================
# Dynamically create phony targets for each testbench
# ====================================
.PHONY: $(TESTBENS)
$(TESTBENS):
	@$(MAKE) build-$@ run-$@

# ====================================
# Clean
# ====================================
clean:
	rm -rf $(OUT_DIR)