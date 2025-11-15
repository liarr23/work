<!-- Auto-generated guidance for AI coding agents. Keep concise and actionable. -->
# Copilot / AI agent instructions for this repository

This repository contains small C projects and Code::Blocks (.cbp) project files organized by folders such as `10.25/` and `10.27/`. Most folders contain a single `main.c` that implements a standalone program (competitive-programming style). Use the guidance below to be productive.

Key facts (big picture)
- This is a collection of small, standalone C programs (single-file executables). Examples: `main.c` (root), `10.27/main.c`, `10.27/1/main.c`, `10.25/main.c`.
- Build metadata is provided by Code::Blocks project files (`*.cbp`) such as `work.cbp`, `10.27/10.27.cbp`, and `10.25/10.25.cbp`.
- There is no central build system (no Makefile/CMake). Editing is usually local to a single `main.c` file.

Project-specific conventions and patterns
- Single-file programs: changes should normally be confined to the file(s) under the specific dated folder (e.g., `10.27/main.c` or `10.27/1/main.c`).
- Input parsing: scanf is used widely with explicit width specifiers (e.g., `scanf("%1000000s", num);`). Preserve or carefully adapt these to avoid buffer issues.
- Large static buffers are common (e.g., `char num[10000001];`). When changing buffer sizes or scanf widths, cross-check both sides to avoid overflow or truncation.
- Compiler flags in `.cbp`: `-g` is used for Debug and `-O2 -s` for Release; `-Wall` is added globally. Respect these for debugging vs release builds.

Build & debug workflows (concrete commands)
- Preferred IDE workflow: open the relevant `.cbp` in Code::Blocks on Windows and build the chosen target (Debug/Release).
- Manual gcc (PowerShell) examples (use these when Code::Blocks is not available):
  - Build debug executable for the root `main.c`:
    gcc -g -Wall -o .\bin\Debug\work.exe .\main.c
  - Build a specific program (e.g., `10.27/main.c`):
    gcc -g -Wall -o .\10.27\bin\Debug\main.exe .\10.27\main.c

  Note: adjust paths if `bin\Debug` does not exist; create the directory first.

Patterns to follow when editing
- Keep changes minimal and localized: these programs are often used to solve single problems. Avoid large refactors across folders unless consolidating duplicate code is the explicit goal.
- Preserve input/output format: tests (if any) rely on exact stdout/stderr and scanf behavior.
- When adding functionality that changes program behavior (output text or exit codes), provide a short comment near the top of the file documenting the change and why it's safe.

Integration points and pitfalls
- No external libraries are referenced in the repository; linking is typically trivial. The `.cbp` files disable automatic lib-finding.
- Some source files contain questionable code patterns (e.g., variable shadowing or inconsistent array vs. scanf widths). If you fix such issues, run a local build and test with representative inputs.

Files to inspect when making changes
- `work.cbp` — root Code::Blocks project, shows compiler flags (-g, -O2, -Wall) and output layout (`bin/Debug`, `obj/Debug`).
- `main.c`, `n.c`, `10.25/main.c`, `10.27/main.c`, `10.27/1/main.c` — representative examples of input parsing and program style.

Example concrete guidance (from this repo)
- `main.c` (root and `10.27/main.c`) implement a palindrome checker using `char num[10000001];` and `scanf("%1000000s", num);` — be careful if you shrink/expand either side.
- `10.27/1/main.c` contains a small string-editing program using an enum for commands (`enum {print,reverse,replace};`). Use this file as the pattern for multi-command interactive programs.

When in doubt
- Build locally with the `-g -Wall` flags and run the binary with representative stdin to validate behaviour.
- Keep commits small and reference the specific `main.c` being changed in the commit message.

If anything here is unclear or you'd like me to include test/build automation examples (Makefile, simple PowerShell build script), tell me which target file(s) you'd like automated and I will add them.
