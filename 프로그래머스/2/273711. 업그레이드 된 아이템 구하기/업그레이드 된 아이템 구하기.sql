-- 코드를 작성해주세요
SELECT A.ITEM_ID, A.ITEM_NAME, A.RARITY
FROM ITEM_INFO A
WHERE A.ITEM_ID IN
    (SELECT T.ITEM_ID
    FROM ITEM_INFO I JOIN ITEM_TREE T ON (T.PARENT_ITEM_ID = I.ITEM_ID)
    WHERE I.RARITY='RARE')
ORDER BY A.ITEM_ID DESC;