function LogoutItem(event, player)
player:RemoveItem(ItemId,ItemCount)
end
RegisterPlayerEvent(4,LogoutItem)