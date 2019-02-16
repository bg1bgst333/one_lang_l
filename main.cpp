// ヘッダファイルのインクルード
// 既定のヘッダ
#include <stdio.h> // 標準入出力

// main関数の定義
int main(int argc, char *argv[]){ // コマンドライン引数を受け取る.

  // コマンド引数の処理.
  if (argc == 1){ // argcが1の時.

    // "Hello, OneLang!"と出力.
    printf("Hello, OneLang!\n"); // "Hello, OneLang!"と出力.

  }
  else{ // argcが2以上の時.(argcは0にならないため.)

    // コンパイル対象のソースコードファイル名を出力.
    printf("argv[1] = %s\n", argv[1]); // printfでargv[1]を出力.

  }

  // プログラムの終了
  return 0; // returnで0を返して正常終了.

}
