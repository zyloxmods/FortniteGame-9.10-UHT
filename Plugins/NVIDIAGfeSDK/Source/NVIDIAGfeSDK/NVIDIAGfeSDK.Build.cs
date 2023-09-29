using UnrealBuildTool;

public class NVIDIAGfeSDK : ModuleRules {
    public NVIDIAGfeSDK(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
