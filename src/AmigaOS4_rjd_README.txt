PRIMER:
---
This is an AmigaOS4 port of Space Cadet Pinball based from the great work of:
- https://github.com/k4zmu2a/SpaceCadetPinball
- http://www.xenosoft.de/space-cadet-pinball-2.0-linux.powerpc.tar.gz
- rjd324: Further changes to compile for AmigaOS4

TO RUN
---
- doubleclick or run 'SpaceCadetPinball' from the 'bin' folder

TO BUILD:
---
- Using compiler/tools: https://github.com/sodero/adtools/releases/download/10.3.0_1/adtools-os4-gcc11.1.0-20210531-743.lha
- Using SDK version: $VER: SDK 53.34 (15.12.2021)
- Using sdl2 version 2.0.20 / libsdl2_mixer 2.0.1
- See also 'makefile.os4' for additional required libraries
- move into the 'src' directory and invoke: 'make -f makefile.os4' optionally with the '-j N' flag for concurrent jobs

TODO:
---
- Integrate this into CMAKE
- If not CMAKE then implement HEADER depends in makefile.os4
- Fix when pressing 'ESC': causes iconfication and re-opening seems to not re-render

CHANGES v1.1 (since version 1.0):
---
- Updated core codebase to latest version (Feb 10 2022) from October 2021
- Fixed crash if there is no .DAT file in any search paths
- Game now runs with linear filtering at an acceptable rate
- Added an appropriate icon (thank you Steven Solie/Kevin Lester (CreateIcon)
- GITHUB: Forked to: https://github.com/3246251196/SpaceCadetPinball
          from     : https://github.com/k4zmu2a/SpaceCadetPinball

CHANGES v1.2 (since version 1.1)
---
- Removed the output of SDL Error messages to console window
- Compile with NDEBUG
