using UnrealBuildTool;

public class DriftKairosJSBridge : ModuleRules {
    public DriftKairosJSBridge(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "WebBrowser",
        });
    }
}
