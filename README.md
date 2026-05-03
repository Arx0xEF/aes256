## A CLI AES-256 encryption/decryption tool in C



<p align="center">
  <img src="https://img.shields.io/badge/status-in%20progress-yellow" />
  <img src="https://img.shields.io/github/languages/top/Arx0xEF/aes256" />
  <img src="https://img.shields.io/github/license/Arx0xEF/aes256" />
  <img src="https://img.shields.io/badge/Editor-Vim-019733?logo=vim" />
</p>

---

**A CLI tool to encrypt and decrypt files using AES-256.**

## status
- currently working implementing the AES core (subBytes stage).
- It'll support the CBC and CTR modes in future 

## Features
- AES-256 encryption
- AES-256 decryption
- CLI interface for file input/output
- (Planned) Key expansion
- (Planned) CBC mode support

## Current Progress
- [ ] Key Expansion
- [x] SubBytes
- [ ] ShiftRows
- [ ] MixColumns
- [ ] AddRoundKey

## Disclaimer
This project is for educational purposes only.
Do NOT use in production or for real security.

## License
MIT License
