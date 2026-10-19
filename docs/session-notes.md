# Session evidence

This repository describes the author's recovery session, not a new hardware test performed while writing the documentation.

- User-reported: Windows 11, original USB enumeration failure with power LED on, working ESP8266 ESP-12F NodeMCU tests, EN-to-GND bypass, same-label UART wiring, separate laptop and external power (power bank) supplies, and private full-flash backup saved.
- Earlier conversation text: ESP32 boot/download logs; successful esptool v5.6.0 read-mac and flash-id identifying ESP32-D0WD-V3 revision v3.1 and 4 MB flash; COM9 busy error; WiFi.h missing-core error. Device MAC is excluded.
- Original upload screenshot: Arduino IDE 2.3.10, ESP32 Dev Module, COM9, written-data hash verified. “Hard resetting via RTS” is uploader output and does not demonstrate target reset with this wiring.
- Original diagnostic screenshot: chip model, 240 MHz, 2 cores, 4,194,304 bytes, four networks, uptime 5–13 seconds increasing.
- Original sketch recovered from the local Arduino detect project and included unchanged. It has no credentials and reports only a Wi-Fi count.

Not established: exact clone circuit/USB bridge, original board-package version, cause of the onboard USB problem, explanation of the inconsistent crystal-frequency report, independent backup integrity or long-term stability.

No flash backup was opened, copied into this repository, or published. Screenshots of raw identification commands were omitted because they contain a device identifier. Only a conceptual SVG connection diagram is included as an image. The original upload and diagnostic screenshots were reviewed as evidence but excluded from the repository at the request of the author.
