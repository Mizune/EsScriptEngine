# Setup work

## Introduction

本文章ではDxLibを使用した開発においてGithubによる多数のPCでの使用のための手順をまとめたものである．　初回にすべき設定，既存プロジェクトに置いて最初に行わなくてはならない設定等を記述することとする．

## Project生成の方法
すでにあるテンプレートを使用し，Projectを立ち上げると素早く終了することができる．


## 既存Projectの編集のための設定

既存Projectに対して編集，開発おこなう場合はDxLibをダウンロードした上でVisualStudio上の設定を幾つか行う必要がある．手順は以下のとおり

1. プロジェクトウィンドウから～～～のプロパティを選択する．
2. DropDownListからすべての構成を選択する．
3. C/C++のインクルードディレクトリに前述のDxLibのパスを通す．
4. リンカーの追加のライブラリディレクトリに前述のDxLibのパスを通す．
5. DropDownListから構成をRelease（リリース）に変更する．
6. C/C++のコード生成からランタイムライブラリをマルチスレッド（/MT）に変更する．
7. DropDownListから構成をDebug（デバッグ）に変更する．
8. C/C++のコード生成からランタイムライブラリをマルチスレッド　デバッグ(/MTd)似変更する．

以上の行程を行うことで動作させることができる．なお，設定の変更の際は１変更ごとに適用を押すことを強制する．

