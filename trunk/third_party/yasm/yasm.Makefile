# This file is generated by gyp; do not edit.

export builddir_name ?= trunk/third_party/yasm/out
.PHONY: all
all:
	$(MAKE) -C ../.. config_sources genversion genstring genmacro genperf_libs genmodule re2c genperf generate_files yasm