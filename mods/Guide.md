# Faeria Project

Welcome to the **Faeria Project**! This repository is dedicated to creating a robust platform inspired by the Faeria universe. Dive into a world of strategic card battles, deck building, and digital ownership.

---

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [Tutorials](#tutorials)
  - [How to Host a Server](#how-to-host-a-server)
  - [How to Connect a Solana Wallet](#how-to-connect-a-solana-wallet)
  - [How to Claim Cards](#how-to-claim-cards)
  - [How to Make Mods](#how-to-make-mods)
- [License](#license)

---

## Introduction

The **Faeria Project** merges strategy card games with blockchain technology, allowing players to own and trade digital cards while engaging in epic strategic battles. This project is open-source and designed for both developers and players.

---

## Features

- **Strategic Gameplay:** Shape the battlefield and engage in thrilling card battles.
- **Blockchain Integration:** Own your cards as NFTs on the Solana blockchain.
- **Customizable Servers:** Host your own Faeria-inspired server and customize gameplay.
- **Tutorials and Documentation:** Easy guides to set up and enjoy the platform.

---

## Getting Started

### Prerequisites

- Node.js (v16 or later)
- Docker (optional, for hosting a server)
- A Solana wallet (e.g., Phantom Wallet)
- Internet connection

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/faeria-project.git
   cd faeria-project
   ```

2. Install dependencies:

   ```bash
   npm install
   ```

3. Start the development server:

   ```bash
   npm start
   ```

---

## Tutorials

### How to Host a Server

1. Install Docker:

   ```bash
   sudo apt-get install docker docker-compose
   ```

2. Clone the repository and navigate to the server directory:

   ```bash
   git clone https://github.com/your-username/faeria-project.git
   cd faeria-project/server
   ```

3. Build and run the server:

   ```bash
   docker-compose up --build
   ```

4. Access the server at `http://localhost:3000`.

### How to Connect a Solana Wallet

1. Install the Phantom Wallet extension for your browser.
2. Open the Faeria platform and click **Connect Wallet**.
3. Select **Phantom Wallet** and approve the connection.
4. You can now manage your digital cards directly from your wallet.

### How to Claim Cards

1. Log in to your account on the Faeria platform.
2. Navigate to the **Marketplace** section.
3. Select the card you wish to claim and click **Claim**.
4. Confirm the transaction in your Solana wallet.
5. Your card will appear in your inventory.

### How to Make Mods

Creating mods for the Faeria Project is straightforward. Follow this guide to add custom features or gameplay elements.

#### Step 1: Set Up the Modding Environment

1. Navigate to the `mods` directory in the project:

   ```bash
   cd faeria-project/mods
   ```

2. Create a new folder for your mod:

   ```bash
   mkdir my-custom-mod
   cd my-custom-mod
   ```

3. Create a `mod.json` file to define your mod's metadata:

   ```json
   {
     "name": "My Custom Mod",
     "version": "1.0.0",
     "description": "A custom mod for Faeria Project.",
     "author": "Your Name"
   }
   ```

#### Step 2: Implement the Mod Logic

Create a `mod.c` file to define the mod's functionality. Use the template below:

```c
#include <stdio.h>

void initialize_mod() {
    printf("Initializing My Custom Mod...\n");
    // Add your mod initialization logic here
}

void apply_custom_rules() {
    printf("Applying custom rules...\n");
    // Define your custom game rules here
}

int main() {
    initialize_mod();
    apply_custom_rules();
    return 0;
}
```

#### Step 3: Compile and Activate the Mod

1. Compile the mod:

   ```bash
   gcc mod.c -o my-custom-mod
   ```

2. Move the compiled mod to the `mods/active` directory:

   ```bash
   mv my-custom-mod ../active/
   ```

3. Restart the Faeria server to load the mod:

   ```bash
   cd ../../server
   docker-compose restart
   ```

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Contributing

We welcome contributions! Please fork the repository and submit a pull request to propose changes or enhancements.
