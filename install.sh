#!/bin/bash

function Update() {
    sudo apt update
    sudo apt upgrade
}

function Zsh() {
    sudo apt install zsh
    chsh -s /bin/zsh
    zsh
done
}

function Oh_my_zsh() {
    sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
}

function Tmux() {
    sudo apt install tmux
}

function main() {
    Update()
    Zsh()
    Oh_my_zsh()
}

main()
