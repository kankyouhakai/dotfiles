## Setup default shell
### おまじない
```bash
sudo apt update
sudo apt upgrade
```

### zshを入れる
```bash
sudo apt install zsh
chsh -s /bin/zsh
```
- oh my zshのインストール
```bash
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```
### Hack Nerdを入れる
```bash
curl -sSL https://github.com/ryanoasis/nerd-fonts//releses/latest/download/Hack.zip -O
unzip Hack.zip -d Hack
sudo mkdir -p /usr/share/fonts/downloadfont
sudo mv -fv ./Hack /usr/share/fonts/downloadfont
sudo fc-cache -fv
```
再起動するなり設定から適用するなりしてください

### tmuxを入れる
- なんともともと入っている！
- デフォルトでtmuxを起動
.zshrcの末尾に追記
```bash
if [ -z ${TMUX} ]; then
    tmux new-session -A -s default
fi
```
- tpmとプラグインを入れる
```bash
git clone https://github.com/tmux-plugins/tpm ~/.tmux/plugins/tpm
touch ~/.tmux.conf
vim ~/.tmux.conf
```
tmux.confを編集する
```bash
set -g @plugin 'tmux-plugins/tpm'
set -g @plugin 'tmux-plugins/tmux-sensible'

run '~/.tmux/plugins/tpm/tpm'
```

### nodeを入れる
- nvmを入れる
```bash
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.1/install.sh | zsh
```
- nodeとnpmを入れる
```bash
nvm install --lts
```

### neovimを入れる
```bash
sudo snap install nvim --classic
```
`$HOME/.config/nvim`を持ってくる
`.config`ディレクトリがなかったので`mkdir ~/.config`で作成

`/snap/bin/nvim <file>`で適当なファイルを開くとパッケージのインストールが始まる
coc.nvimがエラーを吐くので
```bash
:call coc#util#install()
```
でインストール
```bash
vim -c "CocInstall coc-lists"
```
のようにコマンドライン上からも実行できる
- 各種lspのインストール
```bash
vim -c "CocInstall coc-clangd"
```

### cargo(rust)を入れる
```bash
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
exec zsh
```

### oh-my-poshを入れる
```bash
sudo wget https://github.com/JanDeDobbeleer/oh-my-posh//releases/latest/download/posh-linux-arm64 -O /usr/local/bin/oh-my-posh
sudo chmod +x /usr/local/bin/oh-my-posh
exec zsh
```
themeのファイルの場所はzshrcにある

### pyenvを入れる
```bash
curl https://pyenv.run | bash
pyenv install --list # 利用可能なバージョンの確認
pyenv install <version>
pyenv global <version>
```
`pyenv versions`で入れてるバージョンがわかる



## todo
- nerd fontの説明
- lazygitの説明 
