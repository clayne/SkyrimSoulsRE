#include "settings.h"

#include "Json2Settings.h"


namespace SkyrimSoulsRE
{
	bool Settings::loadSettings(bool a_dumpParse)
	{
		Json2Settings::Settings::setFileName(FILE_NAME);
		return Json2Settings::Settings::loadSettings(a_dumpParse);
	}


	aSetting<std::string>	Settings::unpausedMenus("unpausedMenus", false, { "magicMenu", "barterMenu", "containerMenu", "journalMenu", "favoritesMenu", "tutorialMenu" });
}
