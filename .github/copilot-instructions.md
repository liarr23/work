<!-- Auto-generated guidance for AI coding agents. Keep concise and actionable. -->
# Copilot / AI agent instructions for this repository

This repository contains small C/C++ projects and Code::Blocks (.cbp) project files organized by folders such as `2025/`, `2026/`, and `acmwinter/`. Most folders contain standalone programs (competitive-programming style) in C, C++, or occasionally Python. Use the guidance below to be productive.

Key facts (big picture)
- This is a collection of small, standalone C/C++/Python programs (single-file executables). Examples: `main.c`, C++ files in `acmwinter/p5/a.cpp`, and occasional Python files like `2026/2026.1/1.31/1.py`.
- Build metadata is provided by Code::Blocks project files (`*.cbp`) such as `work.cbp`, `2025/10.25/10.25.cbp`, and `1111/1111.cbp`.
- There is no central build system (no Makefile/CMake). Editing is usually local to a single source file.

Project-specific conventions and patterns
- Single-file programs: changes should normally be confined to the file(s) under the specific dated folder (e.g., `2025/10.27/main.c` or `acmwinter/p5/a.cpp`).
- **C programs**: Use scanf with explicit width specifiers (e.g., `scanf("%1000000s", num);`). Preserve or carefully adapt these to avoid buffer issues. Large static buffers are common (e.g., `char num[10000001];`). When changing buffer sizes or scanf widths, cross-check both sides to avoid overflow or truncation.
- **C++ programs**: Many use `#include<bits/stdc++.h>` (common in competitive programming), `using namespace std;`, `cout`/`cin` for I/O, and STL containers like `vector`, `map`, `set`. Follow existing patterns in each file.
- **Python programs**: Rare in this repo but present in newer folders (e.g., `2026/2026.1/1.31/1.py`). Keep simple and standalone.
- Compiler flags in `.cbp`: `-g` is used for Debug and `-O2 -s` for Release; `-Wall` is added globally. Respect these for debugging vs release builds.

Build & debug workflows (concrete commands)
- Preferred IDE workflow: open the relevant `.cbp` in Code::Blocks on Windows and build the chosen target (Debug/Release).
- Manual compilation examples (use these when Code::Blocks is not available):
  - **C programs** (gcc/PowerShell):
    ```
    gcc -g -Wall -o .\bin\Debug\work.exe .\main.c
    gcc -g -Wall -o .\2025\10.27\bin\Debug\main.exe .\2025\10.27\main.c
    ```
  - **C++ programs** (g++/PowerShell):
    ```
    g++ -g -Wall -std=c++11 -o .\acmwinter\p5\a.exe .\acmwinter\p5\a.cpp
    g++ -g -Wall -std=c++17 -o .\bin\Debug\program.exe .\program.cpp
    ```
  - **Python programs**:
    ```
    python .\2026\2026.1\1.31\1.py
    ```

  Note: adjust paths if `bin\Debug` does not exist; create the directory first. For C++, use `-std=c++11` or higher as many programs use modern C++ features.

Patterns to follow when editing
- Keep changes minimal and localized: these programs are often used to solve single problems. Avoid large refactors across folders unless consolidating duplicate code is the explicit goal.
- Preserve input/output format: tests (if any) rely on exact stdout/stderr and scanf behavior.
- When adding functionality that changes program behavior (output text or exit codes), provide a short comment near the top of the file documenting the change and why it's safe.

Integration points and pitfalls
- No external libraries are referenced in the repository; linking is typically trivial. The `.cbp` files disable automatic lib-finding.
- Some source files contain questionable code patterns (e.g., variable shadowing or inconsistent array vs. scanf widths). If you fix such issues, run a local build and test with representative inputs.

Files to inspect when making changes
- `work.cbp`, `2025/work.cbp` — Code::Blocks projects, show compiler flags (-g, -O2, -Wall) and output layout (`bin/Debug`, `obj/Debug`).
- `main.c` (C programs), `2025/10.25/main.c` — representative C examples with scanf input parsing.
- `acmwinter/p5/*.cpp`, `acmwinter/p4/*.cpp` — representative C++ examples using STL and `bits/stdc++.h`.
- `2026/2026.1/1.31/1.py` — Python example (rare).

Example concrete guidance (from this repo)
- **C programs**: `2025/10.25/main.c` and similar files implement various algorithms using `char num[10000001];` and `scanf("%1000000s", num);` — be careful if you shrink/expand either side.
- **C++ programs**: `acmwinter/p5/a.cpp` uses union-find with `vector<int> fa(200010);` and path compression. Many C++ files use `bits/stdc++.h` which includes all standard headers (non-portable but common in competitive programming).
- Python programs are minimal; check existing patterns before adding new ones.

When in doubt
- **C programs**: Build locally with `gcc -g -Wall` flags and run the binary with representative stdin to validate behaviour.
- **C++ programs**: Build with `g++ -g -Wall -std=c++11` (or higher) and test with sample inputs. Note that `bits/stdc++.h` is non-standard and may not work on all compilers.
- **Python programs**: Run with `python` or `python3` and verify output.
- Keep commits small and reference the specific file being changed in the commit message (e.g., "fix: update acmwinter/p5/a.cpp logic").

If anything here is unclear or you'd like me to include test/build automation examples (Makefile, simple PowerShell build script), tell me which target file(s) you'd like automated and I will add them.
