package com.rin.pluginlearn;

import org.bukkit.plugin.java.JavaPlugin;

public final class PluginLearn extends JavaPlugin {

    @Override
    public void onEnable() {
        // Plugin startup logic
        getLogger().info("Hello, World!");
    }

    @Override
    public void onDisable() {
        // Plugin shutdown logic
        getLogger().info("Goodbye, World!");
    }
}
