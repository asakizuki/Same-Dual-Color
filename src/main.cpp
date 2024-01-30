#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;

class $modify(PlayerObject) {
	void setColor(ccColor3B const& p0) {
		auto gm = GameManager::sharedState();
		PlayerObject::setColor((gm->getPlayLayer() || gm->getEditorLayer()) ? gm->colorForIdx(gm->getPlayerColor()) : p0);
	}
	void setSecondColor(ccColor3B const& p0) {
		auto gm = GameManager::sharedState();
		PlayerObject::setSecondColor((gm->getPlayLayer() || gm->getEditorLayer()) ? gm->colorForIdx(gm->getPlayerColor2()) : p0);
	}
};