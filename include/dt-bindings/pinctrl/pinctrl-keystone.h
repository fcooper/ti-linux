/*
 * This header provides constants for Keystone pinctrl bindings.
 *
 * Copyright (C) 2015 Texas Instruments
 */

#ifndef _DT_BINDINGS_PINCTRL_KEYSTONE_H
#define _DT_BINDINGS_PINCTRL_KEYSTONE_H

#define MUX_MODE0	0
#define MUX_MODE1	1
#define MUX_MODE2	2
#define MUX_MODE3	3
#define MUX_MODE4	4
#define MUX_MODE5	5

#define INPUT_ENABLE		(1 << 18)
#define PULL_ENA		(0 << 16)
#define PULL_DISABLE		(1 << 16)
#define PULL_UP			(1 << 17)

#define PIN_OUTPUT		PULL_DISABLE
#define PIN_OUTPUT_PULLUP	(PIN_OUTPUT | PULL_ENA | PULL_UP)
#define PIN_OUTPUT_PULLDOWN	(PIN_OUTPUT | PULL_ENA)
#define PIN_INPUT		(INPUT_EN | PULL_DISABLE)
#define PIN_INPUT_PULLUP	(INPUT_EN | PULL_ENA | PULL_UP)
#define PIN_INPUT_PULLDOWN	(PULL_ENA | INPUT_EN)

#endif
