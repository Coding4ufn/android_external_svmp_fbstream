# This file is generated by gyp; do not edit.

export builddir_name ?= trunk/webrtc/test/out
.PHONY: all
all:
	$(MAKE) -C ../.. buildbot_tests_scripts channel_transport test_support test_support_main test_support_main_threaded_mac test_support_unittests
