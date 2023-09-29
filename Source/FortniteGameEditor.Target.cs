using UnrealBuildTool;

public class FortniteGameEditorTarget : TargetRules {
	public FortniteGameEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
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
