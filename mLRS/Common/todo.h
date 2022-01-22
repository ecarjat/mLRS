//*******************************************************
// Copyright (c) MLRS project
// GPL3
// https://www.gnu.org/licenses/gpl-3.0.de.html
// OlliW @ www.olliw.eu
//*******************************************************
// TODO
//*******************************************************
/*

ISSUES:
- sometimes the debug screen in lua slows down massively, can be seen by slow rssi update
  is this mavotx, or mbridge, or?

- the telemetry data (e.g HUD) is very non-smooth, even with good connection => we need to robustify data stream

TODO:

- option to select serial or serial with mavlink parsing, allow e.g. radio_status only in latter mode

- rate management by radio_status txbuf
  note: rts/cts is not a substitute as this wouldn't help in router situations

- get a clean HAL concept

- get a clear mbridge and in concept, currently quite ugly as uart.h conflicts

- handle allowed and not possible parameter combinations properly

- when we eventually do OTA update of the rx, the rx firmware must be universal in the sense that it supports all possible
  rx boards. Gladly, rx modules are relatively simple. But: Craft a concept which hopefully will last for a long time.
  It won't work for different hardware platforms!?
  Ultimately I think it should be all G4 (and maybe ESP32)
*/



