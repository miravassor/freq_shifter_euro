# Project Name
TARGET = Frequency_Shifter

# Sources
CPP_SOURCES = src/Audio_Settings.cpp

# Library Locations
LIBDAISY_DIR = ./libs/libDaisy/
DAISYSP_DIR = ./libs/DaisySP/

# Core location, and generic Makefile.
SYSTEM_FILES_DIR = $(LIBDAISY_DIR)/core
include $(SYSTEM_FILES_DIR)/Makefile