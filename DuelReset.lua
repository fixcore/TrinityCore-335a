function duelreset(event, winner, loser, type)
  winner:ResetAllCooldowns() --Removes winner's CD
  loser:ResetAllCooldowns() --Removes loser's CD
  winner:SetHealth(winner:GetMaxHealth()) --Restores winner's Health
  loser:SetHealth(loser:GetMaxHealth()) --Restores loser's Health
  winner:SetPower(0, winner:GetMaxPower(0)) --Restores winner's Mana
  loser:SetPower(0, loser:GetMaxPower(0)) --Restores loser's Mana
  winner:SetPower(1, winner:GetMaxPower(1)) --Restores winner's Rage
  loser:SetPower(1, loser:GetMaxPower(1)) --Restores loser's Rage
  winner:SetPower(2, winner:GetMaxPower(2)) --Restores winner's Focus
  loser:SetPower(2, loser:GetMaxPower(2)) --Restores loser's Focus
  winner:SetPower(3, winner:GetMaxPower(3)) --Restores winner's Energy
  loser:SetPower(3, loser:GetMaxPower(3)) --Restores loser's Energy
  winner:SetPower(5, winner:GetMaxPower(5)) --Restores winner's Runes
  loser:SetPower(5, loser:GetMaxPower(5)) --Restores loser's Runes
  winner:SetPower(6, winner:GetMaxPower(6)) --Restores winner's Runic Power
  loser:SetPower(6, loser:GetMaxPower(6)) --Restores loser's Runic Power
end

RegisterPlayerEvent(11, duelreset)
