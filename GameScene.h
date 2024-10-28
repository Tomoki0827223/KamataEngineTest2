#pragma once

#include ".vs/audio/Audio.h"
#include ".vs/base/DirectXCommon.h"
#include ".vs/input/Input.h"
#include ".vs/3d/Model.h"
#include ".vs/2d/Sprite.h"
#include ".vs/3d/ViewProjection.h"
#include ".vs/3d/WorldTransform.h"
#include ".vs/base/TextureManager.h"
#include <cassert>

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private: // メンバ変数
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;

	/// <summary>
	/// ゲームシーン用
	/// </summary>
};
