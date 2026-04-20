# AGENTS.md

Project notes for AI agents working on this ZMK config repo. Keep concise.

## Repo purpose

Personal ZMK firmware config for the **Totem** split keyboard with a **dongle-based** 3-piece setup (left half, right half, dongle — all Seeed XIAO BLE / nRF52840).

## ZMK version policy

- Tracks `main` in `config/west.yml` (`revision: main`). Do NOT pin to a release tag — user prefers living on main.

## Board identifier

- Use shorthand **`xiao_ble//zmk`** in `build.yaml`. It is valid Zephyr HWMv2 single-qualifier shorthand for `xiao_ble/nrf52840/zmk` and is the preferred form in this repo.
- Do NOT expand to `xiao_ble/nrf52840/zmk` — it works but is unnecessarily verbose.
- `ZMK_BOARD_COMPAT` (added in ZMK PR #3265) is auto-selected by the board's own Kconfig when the `zmk` variant is chosen. Do NOT set it manually in user config.

## Dongle topology — flashing rules

This is a **dongle-central** setup: the dongle holds the keymap and acts as the BLE central; the halves are peripherals that only report matrix events.

| Change type | Flash dongle? | Flash halves? |
|---|---|---|
| Keymap edits (`totem.keymap`, `keys_lt.h`) | ✅ Yes | ❌ No |
| Layer/behavior/HID logic | ✅ Yes | ❌ No |
| Matrix/wiring/shield overlays (halves) | ✅ Yes | ✅ Yes |
| Split transport protocol / major ZMK bumps | ✅ Yes | ✅ Yes |

**Default assumption for agent-proposed changes: dongle-only flash suffices.** Only escalate to full flash if the change touches `totem_left.overlay` / `totem_right.overlay` / split config.

## `settings_reset`

Only flash if pairing breaks after a firmware update. Procedure: flash `settings_reset.uf2` → board auto-reboots to bootloader → flash real firmware.

## Layer indices (current)

Defined in `config/totem.keymap`: `BASE=0, NAV=1, MOUSE=2, LTU=3, MEDIA=4, NUM=5, SYM=6, FUN=7`.

Historical note: prior to commit `d6a02ee` ("removed colemak"), layers included `BASE_COL`, `BASE_GAL`, `LTU_COL`, `LTU_GAL`. If a rename-style bug reappears, grep for these legacy names — a past CI failure was caused by two leftover `LTU_GAL` refs on line 60 of the keymap after the rename.

## Evidence standard

User requires rigorous proof for technical claims. Cite authoritative sources (Zephyr docs, ZMK PR numbers, live source files) with links/quotes. Do not rely on general knowledge for version-specific behavior. When uncertain, say so and propose an experiment rather than guessing.
