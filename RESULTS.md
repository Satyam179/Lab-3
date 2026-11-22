# Lab 3 — Memory Defect Detection and Remediation (Exp 3)

**Name:** Satyam  
**Roll No.:** 2301730306

**Aim:** Identify, fix, and verify three C memory defects using Valgrind and AddressSanitizer (ASan).

| Defect | Before | After | Observation |
|---|---|---|---|
| Uninitialized read | Valgrind: 4 errors | Valgrind: 0 errors | Initialized via calloc; ASan does not normally detect uninitialized values |
| Memory leak | Valgrind: 400 bytes definitely lost; ASan/LSan: 400 bytes leaked | Valgrind: 0 errors; ASan/LSan: no leak report | Allocated memory freed |
| Double free | Valgrind: Invalid free; ASan: attempting double-free | Valgrind: 0 errors; ASan: no report | Freed once and pointer set NULL |

**Result:** All corrected examples passed the tools shown in the experiment screenshots.

**Evidence still to upload:** `Lab3_Satyam_2301730306_Charcoal.pdf` and nine PNG screenshots under `Evidence/`.
