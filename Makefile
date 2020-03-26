# Paths
SRCDIR := src
OBJDIR := .
PROGRAM := tok64
SRC := $(wildcard $(SRCDIR)/*.c)
PRG := $(OBJDIR)/$(PROGRAM)

# Commands
CC := gcc
RM := rm
MKDIR := mkdir -p

# Flags
CFLAGS := --std=c89

# Targets
.PHONY: all prg clean

all: prg
prg: $(PRG)

$(PRG): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

$(SRC): | $(OBJDIR) $(DSTDIR)

$(OBJDIR):
	$(MKDIR) $(OBJDIR)

clean:
	$(RM) $(PROGRAM)
