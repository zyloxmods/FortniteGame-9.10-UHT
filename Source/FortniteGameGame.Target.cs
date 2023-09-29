using UnrealBuildTool;

public class FortniteGameGameTarget : TargetRules {
	public FortniteGameGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"AnalyticsBlueprintLibrary",
			"EasyAntiCheatCommon",
			"FortniteEngineLoadingScreen",
			"FortniteGame",
			"FortniteUI",
			"LauncherSocialDefaults",
		});
	}
}
