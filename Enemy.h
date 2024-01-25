#pragma once
#include "BaseCharacter.h"

class Enemy : public BaseCharacter {
public:
	enum {
		kModelIndexBody,
		kModelIndexL_arm,
		kModelIndexR_arm,
	};

	float floatingParameter = 0.0f;

	void Initialize(const std::vector<Model*>& models) override;

	void Update() override;

	void Draw(const ViewProjection& viewProjection) override;

	void UpdateGimmick();

protected:
	WorldTransform worldTransformBody_;
	WorldTransform worldTransformL_arm_;
	WorldTransform worldTransformR_arm_;
};
