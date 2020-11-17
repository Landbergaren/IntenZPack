modded class JMModuleConstructor
{
	override void RegisterModules(out TTypenameArray modules)
	{
		modules.Insert(AutorunModule);
		super.RegisterModules(modules);
	}
}
