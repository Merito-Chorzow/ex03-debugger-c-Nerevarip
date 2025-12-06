# Analiza kodu z użyciem debuggera (C, IoT)

Celem ćwiczenia jest nauczenie się praktycznej pracy z **debuggerem** (GDB/LLDB) w języku **C**: stawianie breakpointów, krokowanie, podgląd pamięci, **watchpointy** i analiza błędów typu *off‑by‑one* i *out‑of‑bounds*.

> **Efekt końcowy:** potrafisz zreprodukować i naprawić błędy w kodzie, a w raporcie dołączasz fragmenty logu z debuggera, które pokazują *co* i *dlaczego* było nie tak.

## Budowanie i uruchamianie

### VS Code
1. `Ctrl+Shift+B` → **C: Build (Makefile)**.  
2. **F5** (Debug) → wybierz konfigurację dla swojego systemu.

### Terminal
```bash
make           # buduje do build/app(.exe)
./build/app    # macOS/Linux
# Windows (PowerShell):
# .\build\app.exe
```

Oczekiwane wyjście (na starcie, przed poprawkami): suma oraz zakończenie programu.
