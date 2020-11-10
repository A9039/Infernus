#pragma once
#include "../../Other/VComponent.h"

class Step : public VModule {
public:
	Step() : VModule::VModule("Step", "Height") {};
	void onGmTick();
};

void Jesus::onGmTick() {
	LocalPlayer* Player = Minecraft::GetLocalPlayer();
  Player->stepheight = height;
	if (Player != nullptr) {
  Player->stepheight = 0.5625f;
  }
};
