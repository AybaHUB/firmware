<img src="doc/subbrand-stm32.svg" width="50"/>

# __Example: *hal_gpio_toggle*__

[![User Manual](doc/read_the-UM.svg)](../../../../doc/Cube2.0_Examples_User_Manual.pdf "An offline version is also available in the Cube Firmware package.")

How to configure and drive a GPIO through the HAL API. \
The best illustration is to use a GPIO connected to a LED.


## __1. Detailed scenario__

__Initialization phase__: At the beginning of the main program, the `mx_system_init()` function is called to initialize the peripherals, the Flash interface, the system clock, and the systick.

The application executes the following __example steps__:

- __Step 1__: configures the GPIO as digital output because we are interested only in driving the GPIO HIGH and LOW states.
- __Step 2__: infinite loop toggling the GPIO state with a 100ms delay.

__End of example__: the GPIO toggles forever.


## __2. Example configuration__

[![Configuration Manual](doc/configure_with-ConfigurationMa.svg)](../../../../doc/Cube2.0_Examples_User_Manual.pdf#:~:text=config "An offline version is also available in the Cube Firmware package.")

This example demonstrates the following peripheral(s):

- GPIO

It requires a GPIO pin supporting the following features:

- High Speed Frequency
- Output Push-Pull mode

The GPIO pin is configured as follows:

- Mode set to output push-pull as this is the default GPIO output setting in most cases.
- No pull-up or pull-down required as the push-pull mode is selected.
- Speed set to very high frequency to have a good slew rate.


## __3. Hardware environment and setup__

### __3.1. Generic Setup__

Please find below the hardware setup principle that applies to any board.
<!--
@startuml
@startditaa{doc/ASCII_ditaa_generic.png}
    +-------------------------------------------------------------------------+
    |          /--------------\                                               |
    |          |STM32         |                                               |
    |          |              |                     /-----\                   |
    |          |              |                     |     |                   |
    |          |      Pin x   *---------------------* LED |                   |
    |          |              |                     |     |                   |
    |          |              |                     \-----/                   |
    |          |              |                                               |
    |          |              |                                               |
    |          \--------------/                                               |
    |                                                                         |
    | STM32_Board                                                             |
    +-------------------------------------------------------------------------+
@endditaa
@enduml
-->
![](doc/ASCII_ditaa_generic.png)

> **_NOTE:_**  This is a block diagram and not a schematic (resistors, transistors, exact links are not shown)
 as we focus on the role of the GPIO.

### __3.2. Specific board setups__

Please find the exact hardware configurations of your project by expanding below list.

<!-- YOUR BOARDS ADDED HERE BY README GENERATION -->

<details>
  <summary>On STM32U5 series</summary>

  <details>
  <summary>On board B-U585I-IOT02A</summary>

  | Board pin  | MCU pin | Signal name      | ARDUINO <br> connector pin |
  | :---:      | :---:   | :---:            | :---:       |
  | CN13-6     | PE13    | ARDUINO LED LD2  | D13         |
  </details>

  <details>
  <summary>On board NUCLEO-U545RE-Q</summary>

  | Board pin   | MCU pin | Signal name          | ARDUINO <br> connector pin |
  | :---:       | :---:   | :---:                | :---:        |
  | CN5-6       | PA5     | User green LED (LD1) | -            |
  </details>

  <details>
  <summary>On board NUCLEO-U575ZI-Q</summary>

  | Board pin   | MCU pin | Signal name          | ARDUINO <br> connector pin |
  | :---:       | :---:   | :---:                | :---:        |
  | CN12-19     | PC7     | User green LED (LD1) | -            |
  </details>

</details>

<details>
  <summary>On STM32V8 series</summary>
  <details>
  <summary>On board NUCLEO-V873ZJ</summary>

  | Board pin   | MCU pin | Signal name          | ARDUINO <br> connector pin |
  | :---:       | :---:   | :---:                | :---:        |
  | CN12-4      | PK2     | User green LED (LD1) | -            |
  </details>
</details>


## __4. Troubleshooting__

[![Troubleshooting](doc/debug_with-Troubleshooting.svg)](../../../../doc/Cube2.0_Examples_User_Manual.pdf#:~:text=Troubleshooting "An offline version is also available in the Cube Firmware package.")

Here are the points of attention for this specific example:

- make sure the GPIO port is clocked properly,
- if you use the GPIO to blink a LED, do not use a rate the eye cannot detect because of persistence of vision,
- if you use a GPIO to drive an external LED, please take into account that a resistor may be needed to protect it,
- verify the HAL timings according to [8.1](#81-general-debug-tips) to have proper delays, especially [this point](https://codex.cro.st.com/plugins/mediawiki/wiki/stm32cube/index.php?title=Cube_2.0_EmbSW_WiKi#HAL_timing_issues).


## __5. See Also__

[![SeeAlso](doc/go_further_with-STM32.svg)](../../../../doc/Cube2.0_Examples_User_Manual.pdf#:~:text=See%20Also "An offline version is also available in the Cube Firmware package.")

You can find pinout, pin description and alternate functions in the datasheet of your chosen MCU. \
You can find the hardware layout and configuration of a board in its user manual. \
The connectors are described in this document, as well as the user LEDs and the buttons.

Example of documents available for STM32U585xx MCUs mounted on the Discovery kit for IoT node board:

- see section 4 of [STM32U585xx](https://www.st.com/resource/en/datasheet/stm32u585ai.pdf).
- see section 7 of [Discovery kit for IoT node with STM32U5 Series](https://www.st.com/resource/en/user_manual/um2839-discovery-kit-for-iot-node-with-stm32u5-series-stmicroelectronics.pdf).

You can also refer to these other examples to go further with GPIOs:

- hal_gpio_toggle_trustzone to see how to deal with it in the secure world
- hal_gpio_exti to see how to manage an EXTI line

More information about the STM32 Cube Drivers can be found in the drivers' user manual of the STM32 series you are using.

For instance for the STM32U5 series: [User Manual](https://www.st.com/resource/en/user_manual/dm00813340-.pdf).

More information about the STM32 ecosystem can be found in the [STM32 MCU Developer Zone](https://www.st.com/content/st_com/en/stm32-mcu-developer-zone.html).


## __6. License__

Copyright (c) 2022 STMicroelectronics.

This software is licensed under terms that can be found in the LICENSE file in the root directory
of this software component.
If no LICENSE file comes with this software, it is provided AS-IS.
