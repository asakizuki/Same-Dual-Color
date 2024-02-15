#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;

class $modify(PlayerObject) {
	void setColor(ccColor3B const& p0) {
		auto gm = GameManager::sharedState();
		GJBaseGameLayer* layer = nullptr;
		if (gm->getPlayLayer()) layer = gm->getPlayLayer();
		else if (gm->getEditorLayer()) layer = gm->getEditorLayer();
		if ((layer != nullptr) && (layer->m_player2 == this)) PlayerObject::setColor(gm->colorForIdx(gm->getPlayerColor()));
		else PlayerObject::setColor(p0);
	}
	void setSecondColor(ccColor3B const& p0) {
		auto gm = GameManager::sharedState();
		GJBaseGameLayer* layer = nullptr;
		if (gm->getPlayLayer()) layer = gm->getPlayLayer();
		else if (gm->getEditorLayer()) layer = gm->getEditorLayer();
		if ((layer != nullptr) && (layer->m_player2 == this)) PlayerObject::setSecondColor(gm->colorForIdx(gm->getPlayerColor2()));
		else PlayerObject::setSecondColor(p0);
	}
};