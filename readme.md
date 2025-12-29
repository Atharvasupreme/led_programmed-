# Programmable LED Matrix Display 📟

A programmable digital signage system using an Arduino and MAX7219 LED Matrix. This project demonstrates SPI communication and hardware-level animation control.

## 📌 Project Overview
- **Developed by:** Atharva Sawantdesai
- **Task:** Programmable LED display for messages
- **Learning Outcome:** LED matrix programming and data display
- **Complexity:** Easy
- **Duration:** 5 Hours

## 🛠️ Hardware Requirements
- **Arduino Uno/Nano**
- **MAX7219 8x8 LED Matrix** (Chainable)
- **Jumper Wires**
- **External 5V Power Supply** (Recommended for chains > 4 matrices)

## 📊 Logic Flow
```mermaid
graph LR
    A([Start]) --> B[Initialize SPI & Parola Library]
    B --> C[Set Brightness & Animation Type]
    C --> D[Load Message String]
    D --> E{Animation Finished?}
    E -- Yes --> F[Reset & Loop Message]
    E -- No --> G[Shift Column Data]
    G --> E
