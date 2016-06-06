--DEVKM
local NPC_ENTRY = 190003

function ChangeGenderMenu(event, player, unit)
    if player:GetGender() == 0 then
        player:GossipMenuAddItem(0, "Cambiar a Mujer", 0, 1)
    else
        player:GossipMenuAddItem(0, "Cambiar a Hombre", 0, 2)
    end
    player:GossipMenuAddItem(0, "Olvidalo..", 0, 3)
    player:GossipSendMenu(1, unit)
end

function ChangeGenderSelect(event, player, unit, sender, intid, code)
    if (intid == 1) then
        player:SendBroadcastMessage("|cFFFFA500Tu genero se cambio con exito!")
        player:SetGender(1)
        player:SaveToDB()
        player:GossipComplete()
    elseif (intid == 2) then
        player:SendBroadcastMessage("|cFFFFA500Tu genero se cambio con exito!")
        player:SetGender(0)
        player:SaveToDB()
        player:GossipComplete()
    elseif (intid == 3) then
        player:GossipComplete()
    end
end


RegisterCreatureGossipEvent(NPC_ENTRY, 1, ChangeGenderMenu)
RegisterCreatureGossipEvent(NPC_ENTRY, 2, ChangeGenderSelect)