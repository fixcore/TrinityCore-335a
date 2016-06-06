-- DEVKM
-- No borrar los derechos de autor
-- 2015

local NPC_ENTRY = 54 -- ID del NPC

local ITEM_1 = 57000 -- ID del item
 
local CANTIDAD_1 = 1 -- Cantidad a entregar
 
local NOMBRE_1 = GetItemLink(ITEM_1)
 
local function ItemExChangeOnHello(event, player, unit)
        player:GossipMenuAddItem(0, "Cambiar honor x" ..NOMBRE_1.."", 0, 1)
        player:GossipMenuAddItem(0, "Salir..", 0, 2)
        player:GossipSendMenu(1, unit)
end
 
local function ItemExChangeOnSelect(event, Player, unit, sender, intid, code)
    if (intid == 1) then
        if (Player:GetHonorPoints(10) <=10 )then
        Player:SendBroadcastMessage("|CFF7BBEF7 No tienes el suficiente honor")
        return false;
    end
        if (Player:GetHonorPoints(10) >=10 )then
        Player:SendBroadcastMessage("|CFF7BBEF7 Se ha añadido " ..NOMBRE_1.. "|r")
        Player:AddItem(ITEM_1, CANTIDAD_1)
        Player:ModifyHonorPoints(-10)
        Player:GossipComplete()
        return false;
    end
    elseif (intid == 2) then
        Player:GossipComplete()
    end
    if (intid == 2) then
        Player:GossipComplete()
    end
end
 
RegisterCreatureGossipEvent(NPC_ENTRY, 1, ItemExChangeOnHello)
RegisterCreatureGossipEvent(NPC_ENTRY, 2, ItemExChangeOnSelect)