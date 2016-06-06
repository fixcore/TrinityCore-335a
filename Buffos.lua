--DEVKM
local Cost = 10000
local BUFFIDS = {48074, 48170, 43223, 36880, 467, 48469, 48162}     
local POWERBUFFIDS = {48074, 48170, 43223, 36880, 467, 48469, 48162, 41924} 

function Buff(event, player, message, type, language)
    if(message:lower() == "#buff") then
        if (player:GetCoinage() >= Cost) then
        player:ModifyMoney(-Cost) -- Remove this line if you don't want player to loose golds.
                for k, v in pairs(POWERBUFFIDS) do
                        player:AddAura(v, player)
                        end
        else
        for k, v in pairs(BUFFIDS) do
                        player:AddAura(v, player)
                        end
                        end
        player:SendBroadcastMessage("|cff00ff00Recibes un par de Buff!|r")
    return false
        end
end
 
RegisterPlayerEvent(18, Buff)