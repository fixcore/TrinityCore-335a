--DEVKM
function DuelDone(event, pWinner, pLoser)
	pWinner:ClearAllCooldowns()
	pLoser:ClearAllCooldowns()
	pWinner:SetHealthPct(100)
	pLoser:SetHealthPct(100)
	pWinner:SetManaPct(100)
	pLoser:SetManaPct(100)
end

RegisterServerHook(30, "DuelDone")