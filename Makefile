SRCDIR = ./src
BINDIR = ./bin

all:
	$(MAKE) -C $(SRCDIR)
	
clean:
	$(MAKE) -C $(SRCDIR) clean

install:
	cp $(SRCDIR)/mu $(BINDIR)/