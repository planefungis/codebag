 if(!(manager()->load(plugin) & PluginManager::LoadState::Loaded)) {
        Error{} << "ShaderTools::AnyConverter::validateFile(): cannot load the" << plugin << "plugin";
        return {};
    }
    const PluginManager::PluginMetadata* const metadata = manager()->metadata(plugin);
    CORRADE_INTERNAL_ASSERT(metadata);
    if(flags() & ConverterFlag::Verbose) {
        Debug d;
        d << "ShaderTools::AnyConverter::validateFile(): using" << plugin;
        if(plugin != metadata->name())
            d << "(provided by" << metadata->name() << Debug::nospace << ")";
    }
   if((!_state->definitionViews.isEmpty() || (flags() & ConverterFlag::PreprocessOnly)) && !(converter->features() & ConverterFeature::Preprocess)) {
        Error{} << "ShaderTools::AnyConverter::validateFile():" << metadata->name() << "does not support preprocessing";
        return {};
    }

  if(!(manager()->load(plugin) & PluginManager::LoadState::Loaded)) {
        Error{} << "Trade::AnySceneImporter::openFile(): cannot load the" << plugin << "plugin";
        return;
    }
//hello
    const PluginManager::PluginMetadata* const metadata = manager()->metadata(plugin);
    CORRADE_INTERNAL_ASSERT(metadata);
    if(flags() & ImporterFlag::Verbose) {
        Debug d;
