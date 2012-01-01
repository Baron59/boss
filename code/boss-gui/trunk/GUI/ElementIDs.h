/*	Better Oblivion Sorting Software

	A "one-click" program for users that quickly optimises and avoids 
	detrimental conflicts in their TES IV: Oblivion, Nehrim - At Fate's Edge, 
	TES V: Skyrim, Fallout 3 and Fallout: New Vegas mod load orders.

    Copyright (C) 2009-2012    BOSS Development Team.

	This file is part of Better Oblivion Sorting Software.

    Better Oblivion Sorting Software is free software: you can redistribute 
	it and/or modify it under the terms of the GNU General Public License 
	as published by the Free Software Foundation, either version 3 of 
	the License, or (at your option) any later version.

    Better Oblivion Sorting Software is distributed in the hope that it will 
	be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Better Oblivion Sorting Software.  If not, see 
	<http://www.gnu.org/licenses/>.

	$Revision: 2188 $, $Date: 2011-01-20 10:05:16 +0000 (Thu, 20 Jan 2011) $
*/

#ifndef __ELEMENTIDS__HPP__
#define __ELEMENTIDS__HPP__

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#       include "wx/wx.h"
#endif

enum {
	//Main window.
    OPTION_EditUserRules = wxID_HIGHEST + 1, // declares an id which will be used to call our button
	OPTION_OpenBOSSlog,
	OPTION_Run,
	OPTION_CheckForUpdates,
    MENU_Quit,
	MENU_OpenMainReadMe,
	MENU_OpenUserRulesReadMe,
	MENU_OpenMasterlistReadMe,
	MENU_OpenAPIReadMe,
	MENU_OpenLicenses,
	MENU_ShowAbout,
	MENU_ShowSettings,
	DROPDOWN_LogFormat,
	DROPDOWN_Game,
	DROPDOWN_Revert,
	CHECKBOX_ShowBOSSlog,
	CHECKBOX_Update,
	CHECKBOX_EnableVersions,
	CHECKBOX_EnableCRCs,
	CHECKBOX_TrialRun,
	RADIOBUTTON_SortOption,
	RADIOBUTTON_UpdateOption,
	RADIOBUTTON_UndoOption,
	//About window.
	OPTION_ExitAbout,
	//Settings window.
	OPTION_OKExitSettings,
	OPTION_CancelExitSettings,
	DROPDOWN_ProxyType,
	//User Rules Editor.
	LIST_RuleList,
	BUTTON_NewRule,
	BUTTON_EditRule,
	BUTTON_DeleteRule,
	LIST_Modlist,
	LIST_Masterlist,
	BUTTON_OKExitEditor,
	BUTTON_CancelExitEditor,
	TEXT_ModMessages,
	SEARCH_Masterlist,
	SEARCH_Modlist,
	TEXT_RuleMod,
	CHECKBOX_SortMods,
	RADIO_SortMod,
	RADIO_InsertMod,
	CHOICE_BeforeAfter,
	CHOICE_TopBottom,
	TEXT_SortMod,
	TEXT_InsertMod,
	CHECKBOX_RemoveMessages,
	CHECKBOX_AddMessages,
	TEXT_NewMessages,
	BUTTON_MoveRuleUp,
	BUTTON_MoveRuleDown
};
#endif