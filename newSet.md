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

## todo
- oh-my-poshの説明
- pyenvの説明
- nerd fontの説明
- lazygitの説明 
