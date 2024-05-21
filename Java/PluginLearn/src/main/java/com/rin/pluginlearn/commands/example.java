package com.rin.pluginlearn.commands;
import com.rin.pluginlearn.PluginLearn;
import org.bukkit.command.Command;
import org.bukkit.command.CommandExecutor;
import org.bukkit.command.CommandSender;

public class example implements CommandExecutor {
    @Override
    public boolean onCommand(CommandSender sender, Command cmd, String label, String[] args) {
        if (cmd.getName().equalsIgnoreCase("example")) {
            try {
                if (args[0].equals("arg1")) {
                    sender.sendMessage("這是後綴1");
                    return true;
                } else if (args[0].equals("arg2")) {
                    sender.sendMessage("這是後綴2");
                    return true;
                }
            } catch (Exception e) {
                sender.sendMessage(String.valueOf(e));
                return false;
            }
            return false;
        }
        return false;
    }
}
