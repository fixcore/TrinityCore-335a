function Resettalents(event, player, msg)
local VIP = AuthDBQuery("SELECT `vip` FROM `account` WHERE `id`='"..player:GetAccountId().."'")
VIP = VIP:GetUInt32(0) --pls add an intiger (11) field with name "vip" to youre account table.
local name = player:GetName()
if(VIP == 1)then
SendWorldMessage("|cff00ff00VIP1|R:{|cffff6060"..name.."|R} Reset his/her talents And got |cffff6060 5|R more talents.")
end
if(VIP == 2)then
SendWorldMessage("|cff00ff00VIP2|R:{|cffff6060"..name.."|R} Reset his/her talents And got |cffff6060 10|R more talents.")
end
if(VIP == 3)then
SendWorldMessage("|cff00ff00VIP3|R:{|cffff6060"..name.."|R} Reset his/her talents And got |cffff6060 15|R more talents.")
end
if(VIP == 4)then
SendWorldMessage("|cff00ff00VIP4|R:{|cffff6060"..name.."|R} Reset his/her talents And got |cffff6060 20|R more talents.")
end
if(VIP == 5)then
SendWorldMessage("|cff00ff00VIP5|R:{|cffff6060"..name.."|R} Reset his/her talents And got |cffff6060 25|R more talents.")
end
if(VIP == 6)then
SendWorldMessage("|cff00ff00VIP6|R:{|cffff6060"..name.."|R} Reset his/her talents And got |cffff6060 30|R more talents.")
end
if(VIP == 7)then
SendWorldMessage("|cff00ff00VIP7|R:{|cffff6060"..name.."|R} Reset his/her talents And got |cffff6060 35|R more talents.")
end
end

RegisterPlayerEvent( 17, Resettalents)