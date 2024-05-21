package com.rin.pluginlearn;

import org.bukkit.plugin.java.JavaPlugin;
import com.rin.pluginlearn.commands.example;
public final class PluginLearn extends JavaPlugin {

    @Override
    public void onEnable() {
        // Plugin startup logic
        getLogger().info("Hello, World!");
        this.getCommand("example").setExecutor(new example());
    }

    @Override
    public void onDisable() {
        // Plugin shutdown logic
        getLogger().info("Goodbye, World!");
    }
}