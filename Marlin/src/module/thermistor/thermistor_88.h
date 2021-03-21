/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// 100 kOhm, 4.7 kOhm pull-up, bed thermistor Tronxy X5SA-Pro
const temp_entry_t temptable_88[] PROGMEM = {
  { OV(  23), 285 },
  { OV(  24), 280 },
  { OV(  25), 275 },
  { OV(  27), 270 },
  { OV(  29), 265 },
  { OV(  31), 260 },
  { OV(  34), 255 },
  { OV(  38), 250 },
  { OV(  41), 245 },
  { OV(  45), 240 },
  { OV(  49), 235 },
  { OV(  54), 230 },
  { OV(  60), 225 },
  { OV(  65), 220 },
  { OV(  72), 215 },
  { OV(  79), 210 },
  { OV(  87), 205 },
  { OV(  96), 200 },
  { OV( 107), 195 },
  { OV( 117), 190 },
  { OV( 129), 185 },
  { OV( 142), 180 },
  { OV( 157), 175 },
  { OV( 165), 170 },
  { OV( 180), 165 },
  { OV( 205), 160 },
  { OV( 228), 155 },
  { OV( 250), 150 },
  { OV( 273), 145 },
  { OV( 298), 140 },
  { OV( 325), 135 },
  { OV( 354), 130 },
  { OV( 385), 125 },
  { OV( 418), 120 },
  { OV( 452), 115 },
  { OV( 486), 110 },
  { OV( 523), 105 },
  { OV( 560), 100 },
  { OV( 596),  95 },
  { OV( 635),  90 },
  { OV( 672),  85 },
  { OV( 711),  80 },
  { OV( 746),  75 },
  { OV( 778),  70 },
  { OV( 806),  65 },
  { OV( 840),  60 },
  { OV( 881),  55 },
  { OV( 903),  50 },
  { OV( 916),  45 },
  { OV( 934),  40 },
  { OV( 951),  35 },
  { OV( 963),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 }
};
