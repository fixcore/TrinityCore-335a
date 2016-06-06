--[[
        Do not repost without my permission.
        Do not take credits for what you haven't scripted.
       
------------------------------------------------------
    - Developer: Hei
    - Complete: 100% with ElunaTrinityCata
    - ScriptName: 'Eventsystem'
]]--
 
 
local EventActivateMsg = "#start"
local EventDeactivateMsg = "#stop"
local JoinMsg = "#join"
local Project = "Pandorum Event System"
 
local EventActivated = false
local ReviveActivated = false
 
 
local EventPlace = {}
 
function EventChatSystem(event, player, message, type, language)
        if (message == EventActivateMsg) then
                if (player:GetGMRank() >= 2) then
                        if (EventActivated == true) then
                                player:SendBroadcastMessage("Zurzeit ist bereits ein Event gestartet worden. Bitte Stopt dieses um ein neues Event zu starten!")
                        else   
                        EventActivated = true
                                table.insert(EventPlace, player:GetMapId())
                                table.insert(EventPlace, player:GetX())
                                table.insert(EventPlace, player:GetY())
                                table.insert(EventPlace, player:GetZ())
                                table.insert(EventPlace, player:GetZoneId())
                                local plrs = GetPlayersInWorld()
                                for k, v in pairs(plrs) do
                                        v:SendBroadcastMessage("|cff3399FF[", Project, "]: |cffDFDF18"..player:GetName().." |cffEB0000hat ein Event gestartet, gebt "..JoinMsg.." um beizutreten!")
                                   v:SendAreaTriggerMessage("|cff3399FF[", Project, "]: |cffDFDF18"..player:GetName().." |cffEB0000hat ein Event gestartet, gebt "..JoinMsg.." um beizutreten!")
                                return false
                                end
                        end    
                end
        end
        if (message == EventDeactivateMsg) then
                if (player:GetGMRank() == 4) or (player:GetGMRank() >= 2) then
                if (EventActivated == false) then
                                player:SendBroadcastMessage("Es ist keine Event Aktiviert um es zu schliessen.")
                        else   
                                EventActivated = false
                                EventPlace = {}
                                local plrs = GetPlayersInWorld()
                                for k, v in pairs(plrs) do
                                        v:SendBroadcastMessage("|cff3399FF[", Project, "]: |cffDFDF18" ..player:GetName().." |cffEB0000hat das Event beendet!")
                                   v:SendAreaTriggerMessage("|cff3399FF[", Project, "]: |cffDFDF18" ..player:GetName().." |cffEB0000hat das Event beendet!")
                                return false
                                end    
                        end    
                end
        end
                if (message == JoinMsg) then
                if (EventActivated == false) then
                        player:SendBroadcastMessage("Zurzeit findet keine Event statt.")
                elseif (EventActivated == true) then
                      player:SendAreaTriggerMessage("|cffEB0000Viel Spa\195\159 beim Event |cffDFDF18" ..player:GetName().." |cffEB0000:D")
 
                        player:Teleport(EventPlace[1], EventPlace[2], EventPlace[3], EventPlace[4], EventPlace[5])     
                return false
                end
        end
 
        if (message == Remind) then
                if (EventActivated == false) then
                        player:SendBroadcastMessage("Sie koennen diesen Befehl nur ausfuehren wenn ein Event aktiv ist.")      
                else
                    local plrs = GetPlayersInWorld()
                        for k, v in pairs(plrs) do
                                v:SendBroadcastMessage("Es ist bereits ein Event gestartet gebe bitte "..JoinMsg.." ein um daran teil zunehmen.")
                        return false
                        end    
                end
        end    
end
 
 
RegisterPlayerEvent(18, EventChatSystem)
RegisterPlayerEvent(21, EventChatSystem)
RegisterPlayerEvent(22, EventChatSystem)
RegisterPlayerEvent(20, EventChatSystem)