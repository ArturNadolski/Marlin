/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Polish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#define DISPLAY_CHARSET_ISO10646_PL
#define CHARSIZE 2

#define MSG_CUBED                           _UxGT("mm3")


#ifndef WELCOME_MSG
  #define WELCOME_MSG                         MACHINE_NAME _UxGT(" gotowy.")
#endif
#ifndef MSG_YES
  #define MSG_YES                             _UxGT("TAK")
#endif
#ifndef MSG_NO
  #define MSG_NO                              _UxGT("NIE")
#endif
#ifndef MSG_BACK
  #define MSG_BACK                            _UxGT("Wstecz")
#endif
#ifndef MSG_SD_INSERTED
  #define MSG_SD_INSERTED                     _UxGT("Karta włożona")
#endif
#ifndef MSG_SD_REMOVED
  #define MSG_SD_REMOVED                      _UxGT("Karta wyjęta")
#endif
#ifndef MSG_SD_RELEASED
  #define MSG_SD_RELEASED                     _UxGT("Karta usunięta")
#endif
#ifndef MSG_LCD_ENDSTOPS
  #define MSG_LCD_ENDSTOPS                    _UxGT("Kranców.") // Max length 8 characters
#endif
#ifndef MSG_LCD_SOFT_ENDSTOPS
  #define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Program. kranców.")
#endif
#ifndef MSG_MAIN
  #define MSG_MAIN                            _UxGT("Menu główne")
#endif
#ifndef MSG_ADVANCED_SETTINGS
  #define MSG_ADVANCED_SETTINGS               _UxGT("Ustaw. zaawansowane")
#endif
#ifndef MSG_CONFIGURATION
  #define MSG_CONFIGURATION                   _UxGT("Konfiguracja")
#endif
#ifndef MSG_AUTOSTART
  #define MSG_AUTOSTART                       _UxGT("Autostart")
#endif
#ifndef MSG_DISABLE_STEPPERS
  #define MSG_DISABLE_STEPPERS                _UxGT("Wyłącz silniki")
#endif
#ifndef MSG_DEBUG_MENU
  #define MSG_DEBUG_MENU                      _UxGT("Debug Menu")
#endif
#ifndef MSG_PROGRESS_BAR_TEST
  #define MSG_PROGRESS_BAR_TEST               _UxGT("Progress Bar Test")
#endif
#ifndef MSG_AUTO_HOME
  #define MSG_AUTO_HOME                       _UxGT("Pozycja zerowa")
#endif
#ifndef MSG_AUTO_HOME_X
  #define MSG_AUTO_HOME_X                     _UxGT("Zeruj X")
#endif
#ifndef MSG_AUTO_HOME_Y
  #define MSG_AUTO_HOME_Y                     _UxGT("Zeruj Y")
#endif
#ifndef MSG_AUTO_HOME_Z
  #define MSG_AUTO_HOME_Z                     _UxGT("Zeruj Z")
#endif
#ifndef MSG_AUTO_Z_ALIGN
  #define MSG_AUTO_Z_ALIGN                    _UxGT("Auto Z-Align")
#endif
#ifndef MSG_LEVEL_BED_HOMING
  #define MSG_LEVEL_BED_HOMING                _UxGT("Pozycja zerowa")
#endif
#ifndef MSG_LEVEL_BED_WAITING
  #define MSG_LEVEL_BED_WAITING               _UxGT("Kliknij by rozp.")
#endif
#ifndef MSG_LEVEL_BED_NEXT_POINT
  #define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Następny punkt")
#endif
#ifndef MSG_LEVEL_BED_DONE
  #define MSG_LEVEL_BED_DONE                  _UxGT("Wypoziomowano!")
#endif
#ifndef MSG_Z_FADE_HEIGHT
  #define MSG_Z_FADE_HEIGHT                   _UxGT("Fade Height")
#endif
#ifndef MSG_SET_HOME_OFFSETS
  #define MSG_SET_HOME_OFFSETS                _UxGT("Ust. poz. zer.")
#endif
#ifndef MSG_HOME_OFFSETS_APPLIED
  #define MSG_HOME_OFFSETS_APPLIED            _UxGT("Poz. zerowa ust.")
#endif
#ifndef MSG_SET_ORIGIN
  #define MSG_SET_ORIGIN                      _UxGT("Ustaw punkt zero")
#endif
#ifndef MSG_PREHEAT_1
  #define MSG_PREHEAT_1                       _UxGT("Rozgrzej " PREHEAT_1_LABEL)
#endif
#ifndef MSG_PREHEAT_1_N
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#endif
#ifndef MSG_PREHEAT_1_ALL
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" wsz.")
#endif
#ifndef MSG_PREHEAT_1_END
  #define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" głow.")
#endif
#ifndef MSG_PREHEAT_1_BEDONLY
  #define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" stół")
#endif
#ifndef MSG_PREHEAT_1_SETTINGS
  #define MSG_PREHEAT_1_SETTINGS              _UxGT("Ustaw. rozg. ")
#endif
#ifndef MSG_PREHEAT_2
  #define MSG_PREHEAT_2                       _UxGT("Rozgrzej " PREHEAT_2_LABEL)
#endif
#ifndef MSG_PREHEAT_2_N
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#endif
#ifndef MSG_PREHEAT_2_ALL
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" wsz.")
#endif
#ifndef MSG_PREHEAT_2_END
  #define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" głow.")
#endif
#ifndef MSG_PREHEAT_2_BEDONLY
  #define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" stół")
#endif
#ifndef MSG_PREHEAT_2_SETTINGS
  #define MSG_PREHEAT_2_SETTINGS              _UxGT("Ustaw. rozg. ")
#endif
#ifndef MSG_PREHEAT_CUSTOM
  #define MSG_PREHEAT_CUSTOM                  _UxGT("Rozg. własne")
#endif
#ifndef MSG_COOLDOWN
  #define MSG_COOLDOWN                        _UxGT("Chłodzenie")
#endif
#ifndef MSG_LASER_MENU
  #define MSG_LASER_MENU                      _UxGT("Ustaw. lasera")
#endif
#ifndef MSG_LASER_OFF
  #define MSG_LASER_OFF                       _UxGT("Laser Wł.")
#endif
#ifndef MSG_LASER_ON
  #define MSG_LASER_ON                        _UxGT("Laser Wył.")
#endif
#ifndef MSG_LASER_POWER
  #define MSG_LASER_POWER                     _UxGT("Moc lasera")
#endif
#ifndef MSG_SPINDLE_MENU
  #define MSG_SPINDLE_MENU                    _UxGT("Ustaw. wrzeciona")
#endif
#ifndef MSG_SPINDLE_OFF
  #define MSG_SPINDLE_OFF                     _UxGT("Wrzeciono Wł.")
#endif
#ifndef MSG_SPINDLE_ON
  #define MSG_SPINDLE_ON                      _UxGT("Wrzeciono Wył.")
#endif
#ifndef MSG_SPINDLE_POWER
  #define MSG_SPINDLE_POWER                   _UxGT("Moc wrzeciona")
#endif
#ifndef MSG_SPINDLE_REVERSE
  #define MSG_SPINDLE_REVERSE                 _UxGT("Obroty wrzeciona")
#endif
#ifndef MSG_SWITCH_PS_ON
  #define MSG_SWITCH_PS_ON                    _UxGT("Włącz zasilacz")
#endif
#ifndef MSG_SWITCH_PS_OFF
  #define MSG_SWITCH_PS_OFF                   _UxGT("Wyłącz zasilacz")
#endif
#ifndef MSG_EXTRUDE
  #define MSG_EXTRUDE                         _UxGT("Ekstruzja")
#endif
#ifndef MSG_RETRACT
  #define MSG_RETRACT                         _UxGT("Wycofanie")
#endif
#ifndef MSG_MOVE_AXIS
  #define MSG_MOVE_AXIS                       _UxGT("Ruch osi")
#endif
#ifndef MSG_BED_LEVELING
  #define MSG_BED_LEVELING                    _UxGT("Poziom. stołu")
#endif
#ifndef MSG_LEVEL_BED
  #define MSG_LEVEL_BED                       _UxGT("Poziom. stołu")
#endif
#ifndef MSG_LEVEL_CORNERS
  #define MSG_LEVEL_CORNERS                   _UxGT("Poziom. narożn.")
#endif
#ifndef MSG_NEXT_CORNER
  #define MSG_NEXT_CORNER                     _UxGT("Następny narożn.")
#endif
#ifndef MSG_EDITING_STOPPED
  #define MSG_EDITING_STOPPED                 _UxGT("Edycja siatki zatrzymana")
#endif
#ifndef MSG_MESH_X
  #define MSG_MESH_X                          _UxGT("Pozycja X")
#endif
#ifndef MSG_MESH_Y
  #define MSG_MESH_Y                          _UxGT("Pozycja Y")
#endif
#ifndef MSG_MESH_EDIT_Z
  #define MSG_MESH_EDIT_Z                     _UxGT("Wartość Z")
#endif
#ifndef MSG_USER_MENU
  #define MSG_USER_MENU                       _UxGT("Własne polecenia")
#endif
#ifndef MSG_UBL_DOING_G29
  #define MSG_UBL_DOING_G29                   _UxGT("Wykonuję G29")
#endif
#ifndef MSG_UBL_UNHOMED
  #define MSG_UBL_UNHOMED                     _UxGT("Najpierw wróć na pozycję zerową")
#endif
#ifndef MSG_UBL_TOOLS
  #define MSG_UBL_TOOLS                       _UxGT("Narzędzia UBL")
#endif
#ifndef MSG_UBL_LEVEL_BED
  #define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#endif
#ifndef MSG_LCD_PROBING_MESH
  #define MSG_LCD_PROBING_MESH                _UxGT("Punkt kontrolny")
#endif
#ifndef MSG_LCD_TILTING_MESH
  #define MSG_LCD_TILTING_MESH                _UxGT("Punkt przechylenia")
#endif
#ifndef MSG_IDEX_MENU
  #define MSG_IDEX_MENU                       _UxGT("Tryb IDEX")
#endif
#ifndef MSG_OFFSETS_MENU
  #define MSG_OFFSETS_MENU                    _UxGT("Przesunięcie głowic")
#endif
#ifndef MSG_IDEX_MODE_AUTOPARK
  #define MSG_IDEX_MODE_AUTOPARK              _UxGT("Auto-Park")
#endif
#ifndef MSG_IDEX_MODE_DUPLICATE
  #define MSG_IDEX_MODE_DUPLICATE             _UxGT("Klonowanie")
#endif
#ifndef MSG_IDEX_MODE_MIRRORED_COPY
  #define MSG_IDEX_MODE_MIRRORED_COPY         _UxGT("Odbicie lustrzane")
#endif
#ifndef MSG_IDEX_MODE_FULL_CTRL
  #define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Full control")
#endif
#ifndef MSG_X_OFFSET
  #define MSG_X_OFFSET                        _UxGT("Dysza 2 X")
#endif
#ifndef MSG_Y_OFFSET
  #define MSG_Y_OFFSET                        _UxGT("Dysza 2 Y")
#endif
#ifndef MSG_Z_OFFSET
  #define MSG_Z_OFFSET                        _UxGT("Dysza 2 Z")
#endif
#ifndef MSG_UBL_MANUAL_MESH
  #define MSG_UBL_MANUAL_MESH                 _UxGT("Ręczne tworzenie siatki")
#endif
#ifndef MSG_UBL_BC_INSERT
  #define MSG_UBL_BC_INSERT                   _UxGT("Umieść podkładkę i pomierz")
#endif
#ifndef MSG_UBL_BC_INSERT2
  #define MSG_UBL_BC_INSERT2                  _UxGT("Pomiar")
#endif
#ifndef MSG_UBL_BC_REMOVE
  #define MSG_UBL_BC_REMOVE                   _UxGT("Usuń podkładkę i pomierz")
#endif
#ifndef MSG_UBL_MOVING_TO_NEXT
  #define MSG_UBL_MOVING_TO_NEXT              _UxGT("Idź do następnego")
#endif
#ifndef MSG_UBL_ACTIVATE_MESH
  #define MSG_UBL_ACTIVATE_MESH               _UxGT("Włącz UBL")
#endif
#ifndef MSG_UBL_DEACTIVATE_MESH
  #define MSG_UBL_DEACTIVATE_MESH             _UxGT("Wyłącz UBL")
#endif
#ifndef MSG_UBL_SET_TEMP_BED
  #define MSG_UBL_SET_TEMP_BED                _UxGT("Temp. stołu")
#endif
#ifndef MSG_UBL_BED_TEMP_CUSTOM
  #define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#endif
#ifndef MSG_UBL_SET_TEMP_HOTEND
  #define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Temp. głowicy")
#endif
#ifndef MSG_UBL_HOTEND_TEMP_CUSTOM
  #define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#endif
#ifndef MSG_UBL_MESH_EDIT
  #define MSG_UBL_MESH_EDIT                   _UxGT("Edycja siatki")
#endif
#ifndef MSG_UBL_EDIT_CUSTOM_MESH
  #define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Edytuj własną siatkę")
#endif
#ifndef MSG_UBL_FINE_TUNE_MESH
  #define MSG_UBL_FINE_TUNE_MESH              _UxGT("Dostrajanie siatki")
#endif
#ifndef MSG_UBL_DONE_EDITING_MESH
  #define MSG_UBL_DONE_EDITING_MESH           _UxGT("Edycja siatki zakończona")
#endif
#ifndef MSG_UBL_BUILD_CUSTOM_MESH
  #define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Buduj własną siatkę")
#endif
#ifndef MSG_UBL_BUILD_MESH_MENU
  #define MSG_UBL_BUILD_MESH_MENU             _UxGT("Buduj siatkę")
#endif
#ifndef MSG_UBL_BUILD_MESH_M1
  #define MSG_UBL_BUILD_MESH_M1               _UxGT("Buduj siatkę (" PREHEAT_1_LABEL ")")
#endif
#ifndef MSG_UBL_BUILD_MESH_M2
  #define MSG_UBL_BUILD_MESH_M2               _UxGT("Buduj siatkę (" PREHEAT_2_LABEL ")")
#endif
#ifndef MSG_UBL_BUILD_COLD_MESH
  #define MSG_UBL_BUILD_COLD_MESH             _UxGT("Buduj zimną siatkę")
#endif
#ifndef MSG_UBL_MESH_HEIGHT_ADJUST
  #define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Dostosuj wysokość siatki")
#endif
#ifndef MSG_UBL_MESH_HEIGHT_AMOUNT
  #define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Wysokość")
#endif
#ifndef MSG_UBL_VALIDATE_MESH_MENU
  #define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Sprawdź siatkę")
#endif
#ifndef MSG_UBL_VALIDATE_MESH_M1
  #define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Sprawdź siatkę (" PREHEAT_1_LABEL ")")
#endif
#ifndef MSG_UBL_VALIDATE_MESH_M2
  #define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Sprawdź siatkę (" PREHEAT_2_LABEL ")")
#endif
#ifndef MSG_UBL_VALIDATE_CUSTOM_MESH
  #define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Sprawdź własną siatkę")
#endif
#ifndef MSG_UBL_CONTINUE_MESH
  #define MSG_UBL_CONTINUE_MESH               _UxGT("Kontunuuj siatkę")
#endif
#ifndef MSG_UBL_MESH_LEVELING
  #define MSG_UBL_MESH_LEVELING               _UxGT("Poziomowanie siatki")
#endif
#ifndef MSG_UBL_3POINT_MESH_LEVELING
  #define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Poziomowanie 3-punktowe")
#endif
#ifndef MSG_UBL_GRID_MESH_LEVELING
  #define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Poziomowanie siatkowe")
#endif
#ifndef MSG_UBL_MESH_LEVEL
  #define MSG_UBL_MESH_LEVEL                  _UxGT("Poziom siatki")
#endif
#ifndef MSG_UBL_SIDE_POINTS
  #define MSG_UBL_SIDE_POINTS                 _UxGT("Boczne punkty")
#endif
#ifndef MSG_UBL_MAP_TYPE
  #define MSG_UBL_MAP_TYPE                    _UxGT("Typ mapy")
#endif
#ifndef MSG_UBL_OUTPUT_MAP
  #define MSG_UBL_OUTPUT_MAP                  _UxGT("Output Mesh Map")
#endif
#ifndef MSG_UBL_OUTPUT_MAP_HOST
  #define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Output for Host")
#endif
#ifndef MSG_UBL_OUTPUT_MAP_CSV
  #define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Output for CSV")
#endif
#ifndef MSG_UBL_OUTPUT_MAP_BACKUP
  #define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Off Printer Backup")
#endif
#ifndef MSG_UBL_INFO_UBL
  #define MSG_UBL_INFO_UBL                    _UxGT("Output UBL Info")
#endif
#ifndef MSG_EDIT_MESH
  #define MSG_EDIT_MESH                       _UxGT("Edytuj siatkę")
#endif
#ifndef MSG_UBL_FILLIN_AMOUNT
  #define MSG_UBL_FILLIN_AMOUNT               _UxGT("Wypełnienie")
#endif
#ifndef MSG_UBL_MANUAL_FILLIN
  #define MSG_UBL_MANUAL_FILLIN               _UxGT("Ręczne wypełnienie")
#endif
#ifndef MSG_UBL_SMART_FILLIN
  #define MSG_UBL_SMART_FILLIN                _UxGT("Automatyczne wypełnienie")
#endif
#ifndef MSG_UBL_FILLIN_MESH
  #define MSG_UBL_FILLIN_MESH                 _UxGT("Wypełnienie siatki")
#endif
#ifndef MSG_UBL_INVALIDATE_ALL
  #define MSG_UBL_INVALIDATE_ALL              _UxGT("Unieważnij wszytkie")
#endif
#ifndef MSG_UBL_INVALIDATE_CLOSEST
  #define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Unieważnij najbliższe")
#endif
#ifndef MSG_UBL_FINE_TUNE_ALL
  #define MSG_UBL_FINE_TUNE_ALL               _UxGT("Dostrajanie wszystkich")
#endif
#ifndef MSG_UBL_FINE_TUNE_CLOSEST
  #define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Dostrajanie najbliższych")
#endif
#ifndef MSG_UBL_STORAGE_MESH_MENU
  #define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Przechowywanie siatki")
#endif
#ifndef MSG_UBL_STORAGE_SLOT
  #define MSG_UBL_STORAGE_SLOT                _UxGT("Gniazdo pamięci")
#endif
#ifndef MSG_UBL_LOAD_MESH
  #define MSG_UBL_LOAD_MESH                   _UxGT("Odczytaj siatkę stołu")
#endif
#ifndef MSG_UBL_SAVE_MESH
  #define MSG_UBL_SAVE_MESH                   _UxGT("Zapisz siatkę stołu")
#endif
#ifndef MSG_MESH_LOADED
  #define MSG_MESH_LOADED                     _UxGT("Siatka %i załadowana")
#endif
#ifndef MSG_MESH_SAVED
  #define MSG_MESH_SAVED                      _UxGT("Siatka %i zapisana")
#endif
#ifndef MSG_NO_STORAGE
  #define MSG_NO_STORAGE                      _UxGT("Brak miejsca")
#endif
#ifndef MSG_UBL_SAVE_ERROR
  #define MSG_UBL_SAVE_ERROR                  _UxGT("Błąd: Zapis UBL")
#endif
#ifndef MSG_UBL_RESTORE_ERROR
  #define MSG_UBL_RESTORE_ERROR               _UxGT("Błąd: Odczyt UBL")
#endif
#ifndef MSG_UBL_Z_OFFSET_STOPPED
  #define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z-Offset Stopped")
#endif
#ifndef MSG_UBL_STEP_BY_STEP_MENU
  #define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL krokowo")
#endif

#ifndef MSG_LED_CONTROL
  #define MSG_LED_CONTROL                     _UxGT("Ustaw. oświetlenia LED")
#endif
#ifndef MSG_LEDS
  #define MSG_LEDS                            _UxGT("Kolory")
#endif
#ifndef MSG_LED_PRESETS
  #define MSG_LED_PRESETS                     _UxGT("Zdefiniowane")
#endif
#ifndef MSG_SET_LEDS_RED
  #define MSG_SET_LEDS_RED                    _UxGT("Czerwony")
#endif
#ifndef MSG_SET_LEDS_ORANGE
  #define MSG_SET_LEDS_ORANGE                 _UxGT("Pomarańczowy")
#endif
#ifndef MSG_SET_LEDS_YELLOW
  #define MSG_SET_LEDS_YELLOW                 _UxGT("Żółty")
#endif
#ifndef MSG_SET_LEDS_GREEN
  #define MSG_SET_LEDS_GREEN                  _UxGT("Zielony")
#endif
#ifndef MSG_SET_LEDS_BLUE
  #define MSG_SET_LEDS_BLUE                   _UxGT("Niebieski")
#endif
#ifndef MSG_SET_LEDS_INDIGO
  #define MSG_SET_LEDS_INDIGO                 _UxGT("Indygo")
#endif
#ifndef MSG_SET_LEDS_VIOLET
  #define MSG_SET_LEDS_VIOLET                 _UxGT("Fioletowy")
#endif
#ifndef MSG_SET_LEDS_WHITE
  #define MSG_SET_LEDS_WHITE                  _UxGT("Biały")
#endif
#ifndef MSG_SET_LEDS_DEFAULT
  #define MSG_SET_LEDS_DEFAULT                _UxGT("Domyślne")
#endif
#ifndef MSG_CUSTOM_LEDS
  #define MSG_CUSTOM_LEDS                     _UxGT("Własne kolory")
#endif
#ifndef MSG_INTENSITY_R
  #define MSG_INTENSITY_R                     _UxGT("Czerwony nasycenie")
#endif
#ifndef MSG_INTENSITY_G
  #define MSG_INTENSITY_G                     _UxGT("Zielony nasycenie")
#endif
#ifndef MSG_INTENSITY_B
  #define MSG_INTENSITY_B                     _UxGT("Niebieski nasycenie")
#endif
#ifndef MSG_INTENSITY_W
  #define MSG_INTENSITY_W                     _UxGT("Biały nasycenie")
#endif
#ifndef MSG_LED_BRIGHTNESS
  #define MSG_LED_BRIGHTNESS                  _UxGT("Jasność")
#endif

#ifndef MSG_MOVING
  #define MSG_MOVING                          _UxGT("Ruch...")
#endif
#ifndef MSG_FREE_XY
  #define MSG_FREE_XY                         _UxGT("Free XY")
#endif
#ifndef MSG_MOVE_X
  #define MSG_MOVE_X                          _UxGT("Przesuń w X")
#endif
#ifndef MSG_MOVE_Y
  #define MSG_MOVE_Y                          _UxGT("Przesuń w Y")
#endif
#ifndef MSG_MOVE_Z
  #define MSG_MOVE_Z                          _UxGT("Przesuń w Z")
#endif
#ifndef MSG_MOVE_E
  #define MSG_MOVE_E                          _UxGT("Ekstruzja (oś E)")
#endif
#ifndef MSG_HOTEND_TOO_COLD
  #define MSG_HOTEND_TOO_COLD                 _UxGT("Głowica zbyt zimna")
#endif
#ifndef MSG_MOVE_0025MM
  #define MSG_MOVE_0025MM                     _UxGT("Przesuwaj o 0.025mm")
#endif
#ifndef MSG_MOVE_01MM
  #define MSG_MOVE_01MM                       _UxGT("MPrzesuwaj o 0.1mm")
#endif
#ifndef MSG_MOVE_1MM
  #define MSG_MOVE_1MM                        _UxGT("Przesuwaj o 1mm")
#endif
#ifndef MSG_MOVE_10MM
  #define MSG_MOVE_10MM                       _UxGT("Przesuwaj o 10mm")
#endif
#ifndef MSG_SPEED
  #define MSG_SPEED                           _UxGT("Predkość")
#endif
#ifndef MSG_BED_Z
  #define MSG_BED_Z                           _UxGT("Stół Z")
#endif
#ifndef MSG_NOZZLE
  #define MSG_NOZZLE                          _UxGT("Dysza")
#endif
#ifndef MSG_BED
  #define MSG_BED                             _UxGT("Stół")
#endif
#ifndef MSG_CHAMBER
  #define MSG_CHAMBER                         _UxGT("Obudowa")
#endif
#ifndef MSG_FAN_SPEED
  #define MSG_FAN_SPEED                       _UxGT("Obr. went.")
#endif
#ifndef MSG_EXTRA_FAN_SPEED
  #define MSG_EXTRA_FAN_SPEED                 _UxGT("Obr. dod. went.")
#endif
#ifndef MSG_FLOW
  #define MSG_FLOW                            _UxGT("Przepływ")
#endif
#ifndef MSG_CONTROL
  #define MSG_CONTROL                         _UxGT("Ustawienia")
#endif
#ifndef MSG_MIN
  #define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#endif
#ifndef MSG_MAX
  #define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#endif
#ifndef MSG_FACTOR
  #define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Mnożnik")
#endif
#ifndef MSG_AUTOTEMP
  #define MSG_AUTOTEMP                        _UxGT("Auto. temperatura")
#endif
#ifndef MSG_LCD_ON
  #define MSG_LCD_ON                          _UxGT("Wł.")
#endif
#ifndef MSG_LCD_OFF
  #define MSG_LCD_OFF                         _UxGT("Wył.")
#endif
#ifndef MSG_PID_P
  #define MSG_PID_P                           _UxGT("PID-P")
#endif
#ifndef MSG_PID_I
  #define MSG_PID_I                           _UxGT("PID-I")
#endif
#ifndef MSG_PID_D
  #define MSG_PID_D                           _UxGT("PID-D")
#endif
#ifndef MSG_PID_C
  #define MSG_PID_C                           _UxGT("PID-C")
#endif
#ifndef MSG_SELECT
  #define MSG_SELECT                          _UxGT("Wybierz")
#endif
#ifndef MSG_ACC
  #define MSG_ACC                             _UxGT("Przyśpieszenie")
#endif
#ifndef MSG_JERK
  #define MSG_JERK                            _UxGT("Zryw")
#endif
#if IS_KINEMATIC
  #ifndef MSG_VA_JERK
    #define MSG_VA_JERK                       _UxGT("Zryw Va")
  #endif
  #ifndef MSG_VB_JERK
    #define MSG_VB_JERK                       _UxGT("Zryw Vb")
  #endif
  #ifndef MSG_VC_JERK
    #define MSG_VC_JERK                       _UxGT("Zryw Vc")
  #endif
#else
  #ifndef MSG_VA_JERK
    #define MSG_VA_JERK                       _UxGT("Zryw Vx")
  #endif
  #ifndef MSG_VB_JERK
    #define MSG_VB_JERK                       _UxGT("Zryw Vy")
  #endif
  #ifndef MSG_VC_JERK
    #define MSG_VC_JERK                       _UxGT("Zryw Vz")
  #endif
#endif
#ifndef MSG_VE_JERK
  #define MSG_VE_JERK                         _UxGT("Zryw Ve")
#endif
#ifndef MSG_JUNCTION_DEVIATION
  #define MSG_JUNCTION_DEVIATION              _UxGT("Junction Dev")
#endif
#ifndef MSG_VELOCITY
  #define MSG_VELOCITY                        _UxGT("Velocity")
#endif
#ifndef MSG_VMAX
  #define MSG_VMAX                            _UxGT("Vmax ")
#endif
#ifndef MSG_VMIN
  #define MSG_VMIN                            _UxGT("Vmin")
#endif
#ifndef MSG_VTRAV_MIN
  #define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#endif
#ifndef MSG_ACCELERATION
  #define MSG_ACCELERATION                    _UxGT("Przyśpieszenie")
#endif
#ifndef MSG_AMAX
  #define MSG_AMAX                            _UxGT("Przys. max ")
#endif
#ifndef MSG_A_RETRACT
  #define MSG_A_RETRACT                       _UxGT("Przys. wycofanie")
#endif
#ifndef MSG_A_TRAVEL
  #define MSG_A_TRAVEL                        _UxGT("Przys. przesuń.")
#endif
#ifndef MSG_STEPS_PER_MM
  #define MSG_STEPS_PER_MM                    _UxGT("kroki/mm")
#endif
#if IS_KINEMATIC
  #ifndef MSG_ASTEPS
    #define MSG_ASTEPS                        _UxGT("A kroki/mm")
  #endif
  #ifndef MSG_BSTEPS
    #define MSG_BSTEPS                        _UxGT("B kroki/mm")
  #endif
  #ifndef MSG_CSTEPS
    #define MSG_CSTEPS                        _UxGT("C kroki/mm")
  #endif
#else
  #ifndef MSG_ASTEPS
    #define MSG_ASTEPS                        _UxGT("X kroki/mm")
  #endif
  #ifndef MSG_BSTEPS
    #define MSG_BSTEPS                        _UxGT("Y kroki/mm")
  #endif
  #ifndef MSG_CSTEPS
    #define MSG_CSTEPS                        _UxGT("Z kroki/mm")
  #endif
#endif
#ifndef MSG_ESTEPS
  #define MSG_ESTEPS                          _UxGT("E kroki/mm")
#endif
#ifndef MSG_E1STEPS
  #define MSG_E1STEPS                         _UxGT("E1 kroki/mm")
#endif
#ifndef MSG_E2STEPS
  #define MSG_E2STEPS                         _UxGT("E2 kroki/mm")
#endif
#ifndef MSG_E3STEPS
  #define MSG_E3STEPS                         _UxGT("E3 kroki/mm")
#endif
#ifndef MSG_E4STEPS
  #define MSG_E4STEPS                         _UxGT("E4 kroki/mm")
#endif
#ifndef MSG_E5STEPS
  #define MSG_E5STEPS                         _UxGT("E5 kroki/mm")
#endif
#ifndef MSG_E6STEPS
  #define MSG_E6STEPS                         _UxGT("E6 kroki/mm")
#endif
#ifndef MSG_TEMPERATURE
  #define MSG_TEMPERATURE                     _UxGT("Temperatura")
#endif
#ifndef MSG_MOTION
  #define MSG_MOTION                          _UxGT("Ruch")
#endif
#ifndef MSG_FILAMENT
  #define MSG_FILAMENT                        _UxGT("Filament")
#endif
#ifndef MSG_VOLUMETRIC_ENABLED
  #define MSG_VOLUMETRIC_ENABLED              _UxGT("E w ") MSG_CUBED
#endif
#ifndef MSG_FILAMENT_DIAM
  #define MSG_FILAMENT_DIAM                   _UxGT("Śred. fil.")
#endif
#ifndef MSG_FILAMENT_UNLOAD
  #define MSG_FILAMENT_UNLOAD                 _UxGT("Unload mm")
#endif
#ifndef MSG_FILAMENT_LOAD
  #define MSG_FILAMENT_LOAD                   _UxGT("Load mm")
#endif
#ifndef MSG_ADVANCE_K
  #define MSG_ADVANCE_K                       _UxGT("Advance K")
#endif
#ifndef MSG_CONTRAST
  #define MSG_CONTRAST                        _UxGT("Kontrast LCD")
#endif
#ifndef MSG_STORE_EEPROM
  #define MSG_STORE_EEPROM                    _UxGT("Zapisz w pamięci")
#endif
#ifndef MSG_LOAD_EEPROM
  #define MSG_LOAD_EEPROM                     _UxGT("Wczytaj z pamięci")
#endif
#ifndef MSG_RESTORE_FAILSAFE
  #define MSG_RESTORE_FAILSAFE                _UxGT("Ustaw. fabryczne")
#endif
#ifndef MSG_INIT_EEPROM
  #define MSG_INIT_EEPROM                     _UxGT("Inicjalizuj pamięć")
#endif
#ifndef MSG_SD_UPDATE
  #define MSG_SD_UPDATE                       _UxGT("Ośwież SD")
#endif
#ifndef MSG_RESET_PRINTER
  #define MSG_RESET_PRINTER                   _UxGT("Resetuj drukarkę")
#endif
#ifndef MSG_REFRESH
  #define MSG_REFRESH                         _UxGT("Odśwież")
#endif
#ifndef MSG_WATCH
  #define MSG_WATCH                           _UxGT("Ekran główny")
#endif
#ifndef MSG_PREPARE
  #define MSG_PREPARE                         _UxGT("Przygotuj")
#endif
#ifndef MSG_TUNE
  #define MSG_TUNE                            _UxGT("Strojenie")
#endif
#ifndef MSG_START_PRINT
  #define MSG_START_PRINT                     _UxGT("Drukuj")
#endif
#ifndef MSG_BUTTON_NEXT
  #define MSG_BUTTON_NEXT                     _UxGT("Dalej")
#endif
#ifndef MSG_BUTTON_INIT
  #define MSG_BUTTON_INIT                     _UxGT("Inicjuj")
#endif
#ifndef MSG_BUTTON_STOP
  #define MSG_BUTTON_STOP                     _UxGT("Zatrzymaj")
#endif
#ifndef MSG_BUTTON_PRINT
  #define MSG_BUTTON_PRINT                    _UxGT("Drukuj")
#endif
#ifndef MSG_BUTTON_RESET
  #define MSG_BUTTON_RESET                    _UxGT("Resetuj")
#endif
#ifndef MSG_BUTTON_CANCEL
  #define MSG_BUTTON_CANCEL                   _UxGT("Anuluj")
#endif
#ifndef MSG_BUTTON_DONE
  #define MSG_BUTTON_DONE                     _UxGT("Gotowe")
#endif
#ifndef MSG_PAUSE_PRINT
  #define MSG_PAUSE_PRINT                     _UxGT("Wstrzymaj druk")
#endif
#ifndef MSG_RESUME_PRINT
  #define MSG_RESUME_PRINT                    _UxGT("Wznów druk")
#endif
#ifndef MSG_STOP_PRINT
  #define MSG_STOP_PRINT                      _UxGT("Zatrzymaj druk")
#endif
#ifndef MSG_OUTAGE_RECOVERY
  #define MSG_OUTAGE_RECOVERY                 _UxGT("Outage Recovery")
#endif
#ifndef MSG_CARD_MENU
  #define MSG_CARD_MENU                       _UxGT("Druk z karty SD")
#endif
#ifndef MSG_NO_CARD
  #define MSG_NO_CARD                         _UxGT("Brak karty SD")
#endif
#ifndef MSG_DWELL
  #define MSG_DWELL                           _UxGT("Uśpij...")
#endif
#ifndef MSG_USERWAIT
  #define MSG_USERWAIT                        _UxGT("Kliknij aby wznowić...")
#endif
#ifndef MSG_PRINT_PAUSED
  #define MSG_PRINT_PAUSED                    _UxGT("Druk wstrzymany")
#endif
#ifndef MSG_PRINTING
  #define MSG_PRINTING                        _UxGT("Drukowanie...")
#endif
#ifndef MSG_PRINT_ABORTED
  #define MSG_PRINT_ABORTED                   _UxGT("Druk przerwany")
#endif
#ifndef MSG_NO_MOVE
  #define MSG_NO_MOVE                         _UxGT("Brak ruchu")
#endif
#ifndef MSG_KILLED
  #define MSG_KILLED                          _UxGT("UBITY. ")
#endif
#ifndef MSG_STOPPED
  #define MSG_STOPPED                         _UxGT("ZATRZYMANY. ")
#endif
#ifndef MSG_CONTROL_RETRACT
  #define MSG_CONTROL_RETRACT                 _UxGT("Wycofaj mm")
#endif
#ifndef MSG_CONTROL_RETRACT_SWAP
  #define MSG_CONTROL_RETRACT_SWAP            _UxGT("Swap Re.mm")
#endif
#ifndef MSG_CONTROL_RETRACTF
  #define MSG_CONTROL_RETRACTF                _UxGT("Retract  V")
#endif
#ifndef MSG_CONTROL_RETRACT_ZHOP
  #define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Skok Z mm")
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER
  #define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAP
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVERF
  #define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet V")
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAPF
  #define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#endif
#ifndef MSG_AUTORETRACT
  #define MSG_AUTORETRACT                     _UxGT("Auto. wycofanie")
#endif
#ifndef MSG_FILAMENT_SWAP_LENGTH
  #define MSG_FILAMENT_SWAP_LENGTH            _UxGT("Dł. wycofania")
#endif
#ifndef MSG_TOOL_CHANGE
  #define MSG_TOOL_CHANGE                      _UxGT("Wymiana głowicy")
#endif
#ifndef MSG_TOOL_CHANGE_ZLIFT
  #define MSG_TOOL_CHANGE_ZLIFT                _UxGT("Z Raise")
#endif
#ifndef MSG_SINGLENOZZLE_PRIME_SPD
  #define MSG_SINGLENOZZLE_PRIME_SPD          _UxGT("Prędkość domyślna")
#endif
#ifndef MSG_SINGLENOZZLE_RETRACT_SPD
  #define MSG_SINGLENOZZLE_RETRACT_SPD        _UxGT("Prędkość wycofania")
#endif
#ifndef MSG_NOZZLE_STANDBY
  #define MSG_NOZZLE_STANDBY                  _UxGT("Nozzle Standby")
#endif
#ifndef MSG_FILAMENTCHANGE
  #define MSG_FILAMENTCHANGE                  _UxGT("Zmień filament")
#endif
#ifndef MSG_FILAMENTLOAD
  #define MSG_FILAMENTLOAD                    _UxGT("Załaduj filament")
#endif
#ifndef MSG_FILAMENTUNLOAD
  #define MSG_FILAMENTUNLOAD                  _UxGT("Rozładuj filament")
#endif
#ifndef MSG_FILAMENTUNLOAD_ALL
  #define MSG_FILAMENTUNLOAD_ALL              _UxGT("Rozładuj wszystko")
#endif
#ifndef MSG_INIT_SDCARD
  #define MSG_INIT_SDCARD                     _UxGT("Inicjal. karty SD")
#endif
#ifndef MSG_CHANGE_SDCARD
  #define MSG_CHANGE_SDCARD                   _UxGT("Zmiana karty SD")
#endif
#ifndef MSG_RELEASE_SDCARD
  #define MSG_RELEASE_SDCARD                  _UxGT("Wysuń kartę SD")
#endif
#ifndef MSG_ZPROBE_OUT
  #define MSG_ZPROBE_OUT                      _UxGT("Czujnik Z poza stołem")
#endif
#ifndef MSG_SKEW_FACTOR
  #define MSG_SKEW_FACTOR                     _UxGT("Skew Factor")
#endif
#ifndef MSG_BLTOUCH
  #define MSG_BLTOUCH                         _UxGT("BLTouch")
#endif
#ifndef MSG_BLTOUCH_SELFTEST
  #define MSG_BLTOUCH_SELFTEST                _UxGT("Cmd: Test")
#endif
#ifndef MSG_BLTOUCH_RESET
  #define MSG_BLTOUCH_RESET                   _UxGT("Cmd: Resetuj")
#endif
#ifndef MSG_BLTOUCH_STOW
  #define MSG_BLTOUCH_STOW                    _UxGT("Cmd: Schowaj")
#endif
#ifndef MSG_BLTOUCH_DEPLOY
  #define MSG_BLTOUCH_DEPLOY                  _UxGT("Cmd: Wysuń")
#endif
#ifndef MSG_BLTOUCH_SW_MODE
  #define MSG_BLTOUCH_SW_MODE                 _UxGT("Cmd: Tryb programowy")
#endif
#ifndef MSG_BLTOUCH_5V_MODE
  #define MSG_BLTOUCH_5V_MODE                 _UxGT("Cmd: Tryb 5V")
#endif
#ifndef MSG_BLTOUCH_OD_MODE
  #define MSG_BLTOUCH_OD_MODE                 _UxGT("Cmd: Tryb OD")
#endif
#ifndef MSG_BLTOUCH_MODE_STORE
  #define MSG_BLTOUCH_MODE_STORE              _UxGT("Cmd: Mode-Store")
#endif
#ifndef MSG_BLTOUCH_MODE_STORE_5V
  #define MSG_BLTOUCH_MODE_STORE_5V           _UxGT("BLTouch tryb 5V")
#endif
#ifndef MSG_BLTOUCH_MODE_STORE_OD
  #define MSG_BLTOUCH_MODE_STORE_OD           _UxGT("BLTouch tryb OD")
#endif
#ifndef MSG_BLTOUCH_MODE_ECHO
  #define MSG_BLTOUCH_MODE_ECHO               _UxGT("Report Drain")
#endif
#ifndef MSG_BLTOUCH_MODE_CHANGE
  #define MSG_BLTOUCH_MODE_CHANGE             _UxGT("UWAGA: Błędnie ustawienia mogą spowodowaćuszkodzenie! Kontynuować?")
#endif
#ifndef MSG_TOUCHMI_PROBE
  #define MSG_TOUCHMI_PROBE                   _UxGT("TouchMI")
#endif
#ifndef MSG_TOUCHMI_INIT
  #define MSG_TOUCHMI_INIT                    _UxGT("Inicjalizuj TouchMI")
#endif
#ifndef MSG_TOUCHMI_ZTEST
  #define MSG_TOUCHMI_ZTEST                   _UxGT("Sprawdź przesunięcie Z")
#endif
#ifndef MSG_TOUCHMI_SAVE
  #define MSG_TOUCHMI_SAVE                    _UxGT("Zapisz")
#endif
#ifndef MSG_MANUAL_DEPLOY_TOUCHMI
  #define MSG_MANUAL_DEPLOY_TOUCHMI           _UxGT("Wysuń TouchMI")
#endif
#ifndef MSG_MANUAL_DEPLOY
  #define MSG_MANUAL_DEPLOY                   _UxGT("Wysuń Z-Probe")
#endif
#ifndef MSG_MANUAL_STOW
  #define MSG_MANUAL_STOW                     _UxGT("Schowaj Z-Probe")
#endif
#ifndef MSG_HOME
  #define MSG_HOME                            _UxGT("Powrót") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#endif
#ifndef MSG_FIRST
  #define MSG_FIRST                           _UxGT("najpierw")
#endif
#ifndef MSG_ZPROBE_ZOFFSET
  #define MSG_ZPROBE_ZOFFSET                  _UxGT("Przesunięcie Z-Probe")
#endif
#ifndef MSG_BABYSTEP_X
  #define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#endif
#ifndef MSG_BABYSTEP_Y
  #define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#endif
#ifndef MSG_BABYSTEP_Z
  #define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#endif
#ifndef MSG_BABYSTEP_TOTAL
  #define MSG_BABYSTEP_TOTAL                  _UxGT("Razem")
#endif
#ifndef MSG_ENDSTOP_ABORT
  #define MSG_ENDSTOP_ABORT                   _UxGT("Błąd krańcówki")
#endif
#ifndef MSG_HEATING_FAILED_LCD
  #define MSG_HEATING_FAILED_LCD              _UxGT("Błąd rozgrzewania")
#endif
#ifndef MSG_HEATING_FAILED_LCD_BED
  #define MSG_HEATING_FAILED_LCD_BED          _UxGT("Błąd rozgrzewania stołu")
#endif
#ifndef MSG_HEATING_FAILED_LCD_CHAMBER
  #define MSG_HEATING_FAILED_LCD_CHAMBER      _UxGT("Błąd rozgrzewania komory")
#endif
#ifndef MSG_ERR_REDUNDANT_TEMP
  #define MSG_ERR_REDUNDANT_TEMP              _UxGT("Błąd: REDUNDANT TEMP")
#endif
#ifndef MSG_THERMAL_RUNAWAY
  #define MSG_THERMAL_RUNAWAY                 _UxGT("THERMAL RUNAWAY")
#endif
#ifndef MSG_THERMAL_RUNAWAY_BED
  #define MSG_THERMAL_RUNAWAY_BED             _UxGT("BED THERMAL RUNAWAY")
#endif
#ifndef MSG_THERMAL_RUNAWAY_CHAMBER
  #define MSG_THERMAL_RUNAWAY_CHAMBER         _UxGT("CHAMBER T. RUNAWAY")
#endif
#ifndef MSG_ERR_MAXTEMP
  #define MSG_ERR_MAXTEMP                     _UxGT("Błąd: MAXTEMP")
#endif
#ifndef MSG_ERR_MINTEMP
  #define MSG_ERR_MINTEMP                     _UxGT("Błąd: MINTEMP")
#endif
#ifndef MSG_ERR_MAXTEMP_BED
  #define MSG_ERR_MAXTEMP_BED                 _UxGT("Błąd: MAXTEMP BED")
#endif
#ifndef MSG_ERR_MINTEMP_BED
  #define MSG_ERR_MINTEMP_BED                 _UxGT("Błąd: MINTEMP BED")
#endif
#ifndef MSG_ERR_MAXTEMP_CHAMBER
  #define MSG_ERR_MAXTEMP_CHAMBER             _UxGT("Błąd: MAXTEMP CHAMBER")
#endif
#ifndef MSG_ERR_MINTEMP_CHAMBER
  #define MSG_ERR_MINTEMP_CHAMBER             _UxGT("Błąd: MINTEMP CHAMBER")
#endif
#ifndef MSG_ERR_Z_HOMING
  #define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#endif
#ifndef MSG_HALTED
  #define MSG_HALTED                          _UxGT("DRUKARKA ZATRZYMANA")
#endif
#ifndef MSG_PLEASE_RESET
  #define MSG_PLEASE_RESET                    _UxGT("Proszę zresetować")
#endif
#ifndef MSG_SHORT_DAY
  #define MSG_SHORT_DAY                       _UxGT("d") // One character only
#endif
#ifndef MSG_SHORT_HOUR
  #define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#endif
#ifndef MSG_SHORT_MINUTE
  #define MSG_SHORT_MINUTE                    _UxGT("m") // One character only
#endif
#ifndef MSG_HEATING
  #define MSG_HEATING                         _UxGT("Rozgrzewanie...")
#endif
#ifndef MSG_COOLING
  #define MSG_COOLING                         _UxGT("Chłodzenie...")
#endif
#ifndef MSG_BED_HEATING
  #define MSG_BED_HEATING                     _UxGT("Rozgrzewanie stołu...")
#endif
#ifndef MSG_BED_COOLING
  #define MSG_BED_COOLING                     _UxGT("Chłodzenie stołu...")
#endif
#ifndef MSG_CHAMBER_HEATING
  #define MSG_CHAMBER_HEATING                 _UxGT("Rozgrzewanie komory...")
#endif
#ifndef MSG_CHAMBER_COOLING
  #define MSG_CHAMBER_COOLING                 _UxGT("Chłodzenie komory...")
#endif
#ifndef MSG_DELTA_CALIBRATE
  #define MSG_DELTA_CALIBRATE                 _UxGT("Kalibracja delty")
#endif
#ifndef MSG_DELTA_CALIBRATE_X
  #define MSG_DELTA_CALIBRATE_X               _UxGT("Kalibracja X")
#endif
#ifndef MSG_DELTA_CALIBRATE_Y
  #define MSG_DELTA_CALIBRATE_Y               _UxGT("Kalibracja Y")
#endif
#ifndef MSG_DELTA_CALIBRATE_Z
  #define MSG_DELTA_CALIBRATE_Z               _UxGT("Kalibracja Z")
#endif
#ifndef MSG_DELTA_CALIBRATE_CENTER
  #define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Kalibracja środka")
#endif
#ifndef MSG_DELTA_SETTINGS
  #define MSG_DELTA_SETTINGS                  _UxGT("Ustawienia delty")
#endif
#ifndef MSG_DELTA_AUTO_CALIBRATE
  #define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto kalibracja")
#endif
#ifndef MSG_DELTA_HEIGHT_CALIBRATE
  #define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Wysokość delty")
#endif
#ifndef MSG_DELTA_Z_OFFSET_CALIBRATE
  #define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Probe Z-offset")
#endif
#ifndef MSG_DELTA_DIAG_ROD
  #define MSG_DELTA_DIAG_ROD                  _UxGT("Diag Rod")
#endif
#ifndef MSG_DELTA_HEIGHT
  #define MSG_DELTA_HEIGHT                    _UxGT("Wysokość")
#endif
#ifndef MSG_DELTA_RADIUS
  #define MSG_DELTA_RADIUS                    _UxGT("Promień")
#endif
#ifndef MSG_INFO_MENU
  #define MSG_INFO_MENU                       _UxGT("O drukarce")
#endif
#ifndef MSG_INFO_PRINTER_MENU
  #define MSG_INFO_PRINTER_MENU               _UxGT("Informacje")
#endif
#ifndef MSG_3POINT_LEVELING
  #define MSG_3POINT_LEVELING                 _UxGT("Poziomowanie 3-punktowe")
#endif
#ifndef MSG_LINEAR_LEVELING
  #define MSG_LINEAR_LEVELING                 _UxGT("Poziomowanie liniowe")
#endif
#ifndef MSG_BILINEAR_LEVELING
  #define MSG_BILINEAR_LEVELING               _UxGT("Poziomowanie dwuliniowe")
#endif
#ifndef MSG_UBL_LEVELING
  #define MSG_UBL_LEVELING                    _UxGT("Poziomowanie UBL")
#endif
#ifndef MSG_MESH_LEVELING
  #define MSG_MESH_LEVELING                   _UxGT("Poziomowanie siatkowe")
#endif
#ifndef MSG_INFO_STATS_MENU
  #define MSG_INFO_STATS_MENU                 _UxGT("Statystyki drukarki")
#endif
#ifndef MSG_INFO_BOARD_MENU
  #define MSG_INFO_BOARD_MENU                 _UxGT("Płyta")
#endif
#ifndef MSG_INFO_THERMISTOR_MENU
  #define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistory")
#endif
#ifndef MSG_INFO_EXTRUDERS
  #define MSG_INFO_EXTRUDERS                  _UxGT("Ekstrudery")
#endif
#ifndef MSG_INFO_BAUDRATE
  #define MSG_INFO_BAUDRATE                   _UxGT("Prędkość")
#endif
#ifndef MSG_INFO_PROTOCOL
  #define MSG_INFO_PROTOCOL                   _UxGT("Protokół")
#endif
#ifndef MSG_CASE_LIGHT
  #define MSG_CASE_LIGHT                      _UxGT("Oświetlenie")
#endif
#ifndef MSG_CASE_LIGHT_BRIGHTNESS
  #define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Jasność oświetlenia")
#endif
#if LCD_WIDTH >= 20
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              _UxGT("Liczba wydruków")
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Ukończono")
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               _UxGT("Sumaryczny czas drukowania")
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            _UxGT("Najdłuższy wydruk")
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           _UxGT("Zużyty filament")
  #endif
#else
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              _UxGT("Wydruki")
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Ukończone")
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               _UxGT("Suma")
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            _UxGT("Najdłuższy")
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           _UxGT("Filament")
  #endif
#endif
#ifndef MSG_INFO_MIN_TEMP
  #define MSG_INFO_MIN_TEMP                   _UxGT("Min Temp")
#endif
#ifndef MSG_INFO_MAX_TEMP
  #define MSG_INFO_MAX_TEMP                   _UxGT("Max Temp")
#endif
#ifndef MSG_INFO_PSU
  #define MSG_INFO_PSU                        _UxGT("Zasilacz")
#endif
#ifndef MSG_DRIVE_STRENGTH
  #define MSG_DRIVE_STRENGTH                  _UxGT("Siła silnika")
#endif
#ifndef MSG_DAC_PERCENT
  #define MSG_DAC_PERCENT                     _UxGT("Siła %")
#endif
#ifndef MSG_DAC_EEPROM_WRITE
  #define MSG_DAC_EEPROM_WRITE                _UxGT("Zapisz DAC")
#endif
#ifndef MSG_FILAMENT_CHANGE_HEADER_PAUSE
  #define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("WYDRUK WSTRZYMANY")
#endif
#ifndef MSG_FILAMENT_CHANGE_HEADER_LOAD
  #define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("ZAŁADUJ FILAMENT")
#endif
#ifndef MSG_FILAMENT_CHANGE_HEADER_UNLOAD
  #define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("ROZŁADUJ FILAMENT")
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_HEADER
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("OPCJE WZNAWIANIA:")
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_PURGE
  #define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Oczyść")
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_RESUME
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Kontynuuj")
#endif
#ifndef MSG_FILAMENT_CHANGE_NOZZLE
  #define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Dysza: ")
#endif
#ifndef MSG_RUNOUT_SENSOR
  #define MSG_RUNOUT_SENSOR                   _UxGT("Czujnik filamentu")
#endif
#ifndef MSG_RUNOUT_DISTANCE_MM
  #define MSG_RUNOUT_DISTANCE_MM              _UxGT("Dł. filamentu mm")
#endif
#ifndef MSG_ERR_HOMING_FAILED
  #define MSG_ERR_HOMING_FAILED               _UxGT("Błąd powrotu na poz. zer.")
#endif
#ifndef MSG_ERR_PROBING_FAILED
  #define MSG_ERR_PROBING_FAILED              _UxGT("Błąd poziomowania")
#endif
#ifndef MSG_M600_TOO_COLD
  #define MSG_M600_TOO_COLD                   _UxGT("M600: Za niska temp.")
#endif

#ifndef MSG_MMU2_FILAMENT_CHANGE_HEADER
  #define MSG_MMU2_FILAMENT_CHANGE_HEADER     _UxGT("ZMIANA FILAMENTU")
#endif
#ifndef MSG_MMU2_CHOOSE_FILAMENT_HEADER
  #define MSG_MMU2_CHOOSE_FILAMENT_HEADER     _UxGT("WYBIERZ FILAMENT")
#endif
#ifndef MSG_MMU2_MENU
  #define MSG_MMU2_MENU                       _UxGT("MMU")
#endif
#ifndef MSG_MMU2_WRONG_FIRMWARE
  #define MSG_MMU2_WRONG_FIRMWARE             _UxGT("Zaktualizuj firmware MMU!")
#endif
#ifndef MSG_MMU2_NOT_RESPONDING
  #define MSG_MMU2_NOT_RESPONDING             _UxGT("MMU nie odpowiada.")
#endif
#ifndef MSG_MMU2_RESUME
  #define MSG_MMU2_RESUME                     _UxGT("Wznów wydruk")
#endif
#ifndef MSG_MMU2_RESUMING
  #define MSG_MMU2_RESUMING                   _UxGT("Wznawianie...")
#endif
#ifndef MSG_MMU2_LOAD_FILAMENT
  #define MSG_MMU2_LOAD_FILAMENT              _UxGT("Załaduj filament")
#endif
#ifndef MSG_MMU2_LOAD_ALL
  #define MSG_MMU2_LOAD_ALL                   _UxGT("Załaduj wszystkie")
#endif
#ifndef MSG_MMU2_LOAD_TO_NOZZLE
  #define MSG_MMU2_LOAD_TO_NOZZLE             _UxGT("Load to nozzle")
#endif
#ifndef MSG_MMU2_EJECT_FILAMENT
  #define MSG_MMU2_EJECT_FILAMENT             _UxGT("Wysuń filament")
#endif
#ifndef MSG_MMU2_EJECT_FILAMENT0
  #define MSG_MMU2_EJECT_FILAMENT0            _UxGT("Wysuń filament 1")
#endif
#ifndef MSG_MMU2_EJECT_FILAMENT1
  #define MSG_MMU2_EJECT_FILAMENT1            _UxGT("Wysuń filament 2")
#endif
#ifndef MSG_MMU2_EJECT_FILAMENT2
  #define MSG_MMU2_EJECT_FILAMENT2            _UxGT("Wysuń filament 3")
#endif
#ifndef MSG_MMU2_EJECT_FILAMENT3
  #define MSG_MMU2_EJECT_FILAMENT3            _UxGT("Wysuń filament 4")
#endif
#ifndef MSG_MMU2_EJECT_FILAMENT4
  #define MSG_MMU2_EJECT_FILAMENT4            _UxGT("Wysuń filament 5")
#endif
#ifndef MSG_MMU2_UNLOAD_FILAMENT
  #define MSG_MMU2_UNLOAD_FILAMENT            _UxGT("Załaduj filament")
#endif
#ifndef MSG_MMU2_LOADING_FILAMENT
  #define MSG_MMU2_LOADING_FILAMENT           _UxGT("Ładowanie fil. %i...")
#endif
#ifndef MSG_MMU2_EJECTING_FILAMENT
  #define MSG_MMU2_EJECTING_FILAMENT          _UxGT("Wysuwanie fil. ...")
#endif
#ifndef MSG_MMU2_UNLOADING_FILAMENT
  #define MSG_MMU2_UNLOADING_FILAMENT         _UxGT("Wysuwanie fil....")
#endif
#ifndef MSG_MMU2_ALL
  #define MSG_MMU2_ALL                        _UxGT("Wszystkie")
#endif
#ifndef MSG_MMU2_FILAMENT0
  #define MSG_MMU2_FILAMENT0                  _UxGT("Filament 1")
#endif
#ifndef MSG_MMU2_FILAMENT1
  #define MSG_MMU2_FILAMENT1                  _UxGT("Filament 2")
#endif
#ifndef MSG_MMU2_FILAMENT2
  #define MSG_MMU2_FILAMENT2                  _UxGT("Filament 3")
#endif
#ifndef MSG_MMU2_FILAMENT3
  #define MSG_MMU2_FILAMENT3                  _UxGT("Filament 4")
#endif
#ifndef MSG_MMU2_FILAMENT4
  #define MSG_MMU2_FILAMENT4                  _UxGT("Filament 5")
#endif
#ifndef MSG_MMU2_RESET
  #define MSG_MMU2_RESET                      _UxGT("Resetuj MMU")
#endif
#ifndef MSG_MMU2_RESETTING
  #define MSG_MMU2_RESETTING                  _UxGT("Resetowanie MMU...")
#endif
#ifndef MSG_MMU2_EJECT_RECOVER
  #define MSG_MMU2_EJECT_RECOVER              _UxGT("Usuń, kliknij")
#endif

#ifndef MSG_MIX
  #define MSG_MIX                             _UxGT("Mix")
#endif
#ifndef MSG_MIX_COMPONENT
  #define MSG_MIX_COMPONENT                   _UxGT("Component")
#endif
#ifndef MSG_MIXER
  #define MSG_MIXER                           _UxGT("Mixer")
#endif
#ifndef MSG_GRADIENT
  #define MSG_GRADIENT                        _UxGT("Gradient")
#endif
#ifndef MSG_FULL_GRADIENT
  #define MSG_FULL_GRADIENT                   _UxGT("Pełen gradient")
#endif
#ifndef MSG_TOGGLE_MIX
  #define MSG_TOGGLE_MIX                      _UxGT("Toggle mix")
#endif
#ifndef MSG_CYCLE_MIX
  #define MSG_CYCLE_MIX                       _UxGT("Cycle mix")
#endif
#ifndef MSG_GRADIENT_MIX
  #define MSG_GRADIENT_MIX                    _UxGT("Gradient mix")
#endif
#ifndef MSG_REVERSE_GRADIENT
  #define MSG_REVERSE_GRADIENT                _UxGT("Odwrócowny gradient")
#endif
#ifndef MSG_ACTIVE_VTOOL
  #define MSG_ACTIVE_VTOOL                    _UxGT("Active V-tool")
#endif
#ifndef MSG_START_VTOOL
  #define MSG_START_VTOOL                     _UxGT("Start V-tool")
#endif
#ifndef MSG_END_VTOOL
  #define MSG_END_VTOOL                       _UxGT("  End V-tool")
#endif
#ifndef MSG_GRADIENT_ALIAS
  #define MSG_GRADIENT_ALIAS                  _UxGT("Alias V-tool")
#endif
#ifndef MSG_RESET_VTOOLS
  #define MSG_RESET_VTOOLS                    _UxGT("Reset V-tools")
#endif
#ifndef MSG_COMMIT_VTOOL
  #define MSG_COMMIT_VTOOL                    _UxGT("Commit V-tool Mix")
#endif
#ifndef MSG_VTOOLS_RESET
  #define MSG_VTOOLS_RESET                    _UxGT("V-tools were reset")
#endif
#ifndef MSG_START_Z
  #define MSG_START_Z                         _UxGT("Start Z")
#endif
#ifndef MSG_END_Z
  #define MSG_END_Z                           _UxGT("  End Z")
#endif
#ifndef MSG_BRICKOUT
  #define MSG_BRICKOUT                        _UxGT("Brickout")
#endif
#ifndef MSG_INVADERS
  #define MSG_INVADERS                        _UxGT("Invaders")
#endif
#ifndef MSG_SNAKE
  #define MSG_SNAKE                           _UxGT("Sn4k3")
#endif
#ifndef MSG_MAZE
  #define MSG_MAZE                            _UxGT("Maze")
#endif

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #ifndef MSG_ADVANCED_PAUSE_WAITING_1
    #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Naciścnij przycisk")
    #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("aby wznowić wydruk")
  #endif
  #ifndef MSG_PAUSE_PRINT_INIT_1
    #define MSG_PAUSE_PRINT_INIT_1            _UxGT("Parkowanie...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Czekam na")
    #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("zmaianę filamentu")
    #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("aby zacząć")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Włóż filament")
    #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("i naciśnij przycisk")
    #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("aby kontynuować")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEAT_1
    #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Nacisnij przycisk")
    #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("aby rozgrzać dyszę")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEATING_1
    #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Rozgrzewanie dyszy")
    #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Proszę czekać...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Czekam na")
    #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("wyjęcie filamentu")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Czekam na")
    #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("włożenie filamentu")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_PURGE_1
    #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Czekam na")
    #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("oczyszczenie filamenu")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_CONT_PURGE_1
    #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Kliknij aby zakończyć")
    #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("oczyszczanie filamentu")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Czekam na")
    #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("wznowienie druku...")
  #endif
#else // LCD_HEIGHT < 4
  #ifndef MSG_ADVANCED_PAUSE_WAITING_1
    #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Kliknij aby kontynuować")
  #endif
  #ifndef MSG_PAUSE_PRINT_INIT_1
    #define MSG_PAUSE_PRINT_INIT_1            _UxGT("Parkowanie...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Proszę czekać...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Włóż i naciśnij prz.")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEAT_1
    #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Kliknij aby rozgrzać")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEATING_1
    #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Rozgrzewanie...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Wysuwanie...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Ładowanie...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_PURGE_1
    #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Oczyszczanie...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_CONT_PURGE_1
    #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Kliknij aby zakończyć")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Wznawianie...")
  #endif
#endif // LCD_HEIGHT < 4

#ifndef MSG_TMC_DRIVERS
  #define MSG_TMC_DRIVERS                     _UxGT("Sterowniki TMC")
#endif
#ifndef MSG_TMC_CURRENT
  #define MSG_TMC_CURRENT                     _UxGT("Prąd")
#endif
#ifndef MSG_TMC_HYBRID_THRS
  #define MSG_TMC_HYBRID_THRS                 _UxGT("Próg hybrydowy")
#endif
#ifndef MSG_TMC_HOMING_THRS
  #define MSG_TMC_HOMING_THRS                 _UxGT("Powrót bezczujnikowy")
#endif
#ifndef MSG_TMC_STEPPING_MODE
  #define MSG_TMC_STEPPING_MODE               _UxGT("Typ mikrokroku")
#endif
#ifndef MSG_TMC_STEALTH_ENABLED
  #define MSG_TMC_STEALTH_ENABLED             _UxGT("StealthChop włączony")
#endif

#ifndef MSG_SERVICE_RESET
  #define MSG_SERVICE_RESET                   _UxGT("Reset")
#endif
#ifndef MSG_SERVICE_IN
  #define MSG_SERVICE_IN                      _UxGT(" w:")
#endif

#ifndef MSG_BACKLASH
  #define MSG_BACKLASH                        _UxGT("Reakcja")
#endif
#ifndef MSG_BACKLASH_CORRECTION
  #define MSG_BACKLASH_CORRECTION             _UxGT("Korekta reakcji")
#endif
#ifndef MSG_BACKLASH_SMOOTHING
  #define MSG_BACKLASH_SMOOTHING              _UxGT("Wygładzanie reakcji")
#endif
