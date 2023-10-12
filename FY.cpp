// FY.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//


#include <iostream>
#include<ctime>
using namespace std;
//フィッシャーイェーツランダム
int main()
{
	srand((unsigned int)time(NULL));
	int* array;
	int size;
	cout << "数字の数を入力してください>";
	cin >> size;
	array = new int[size];
	//適当な数で初期化
	for (int i = 0;i < size;++i)
	{
		array[i] = rand() % 100;
		cout << array[i] << ',';
		cout << i << endl;
	}

	int randam = 0, change = 0;

	cout << "\n";
	for (int i = 0;i < size;++i)
	{
		randam = rand() % (size - i);
		cout << randam << ',';
		swap(array[randam], array[size - (i + 1)]);
	}
	cout << "\nフィッシャーイェーツ使用後" << endl;
	for (int i = 0;i < size;++i)
	{
		cout << array[i] << ',';
	}

}
// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
