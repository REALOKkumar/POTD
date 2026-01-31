# Makefile for cleaning unnecessary compiled files in a practice folder

# Patterns of files to remove
CLEAN_EXTENSIONS = *.o *.obj *.exe *.out

# Default target
all:
	@echo "Available commands:"
	@echo "  make clean   - Remove compiled/temporary files"
	@echo "  make superclean - Remove all executable and output files"

# Clean basic compiled files
clean:
	@echo "Cleaning object and temporary files..."
	@rm -f $(CLEAN_EXTENSIONS)
	@echo "Done!"

# Clean *all* executables (Linux and Windows)
superclean:
	@echo "Removing all executables..."
	@find . -maxdepth 1 -type f -perm /111 -exec rm -f {} \; 2>/dev/null || true
	@rm -f $(CLEAN_EXTENSIONS)
	@echo "All executables removed!"
